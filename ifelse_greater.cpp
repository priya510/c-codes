//WAP in c++ to accept three numbers from user and display greatest number.


#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float n1,n2,n3;

    cout<<"enter the three numbers:"<<endl;
    cin >> n1 >> n2 >> n3;

    if(n1 >= n2 && n1 >= n3)
        cout << "Largest number: " << n1;

    if(n2 >= n1 && n2 >= n3)
        cout << "Largest number: " << n2;

    if(n3 >= n1 && n3 >= n2)
        cout << "Largest number: " << n3;

    return 0;


}



