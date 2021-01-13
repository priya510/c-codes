/*
    WAP to accept an alphabet from user
    and check whether it vowel or consonant.
*/

#include<iostream>
using namespace std;

int main()
{
    char alpha;
    cout<<"Enter an alphabet"<<endl;
    cin>>alpha;

    switch(tolower(alpha))
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout<<"it is vowel"<<endl;
            break;
        default:
            cout<<"it is consonant"<<endl;
            break;
    }
    return 0;
}

