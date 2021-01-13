
//2)WAP to accept a number from user and print n to 1.

#include<iostream>
using namespace std;
int main()
{
  	int Number, i;

  	cout<<"Please Enter any Integer Value :"<<endl;
  	cin>>Number;

  	cout<<"List of numbers from n to 1:"<<Number<<endl;
	for(i = Number; i >= 1; i--)
  	{
    	cout<<i<<endl;
  	}

  	return 0;
}
