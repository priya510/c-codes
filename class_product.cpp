// WAP in c++ to create a product and store 3 products and display products in reverse order/latest product first.

/* eg.

INPUT:
iphone
samsung
moto


OUTPUT:
moto
samsung
iphone */



#include<iostream>
using namespace std;

class Mobile
{
    public:
    int mobileid;
    string mobilename;
    float price;
};

int main()
{
    int count,c;
    cout<<"Enter number of Counts:\n"<<endl;
    cin>>count;
    c=count-1;

    Mobile mobiles[count];
    cout<<"Enter details of  mobiles:\n"<<endl;

    for(int i=0;i<count;i++)
    {
        Mobile m;

        cout<<"Enter Mobile Name"<<endl;
        cin>>m.mobilename;

        cout<<"Enter Mobile id"<<endl;
        cin>>m.mobileid;

        cout<<"Enter Mobile Price"<<endl;
        cin>>m.price;

        mobiles[i]=m;

        cout<<endl;
    }

    cout<<"\n------Mobile Details------\n";
    for(int i=0;i<count;i++)
    {
        cout<<"Mobile Id: "<<mobiles[c].mobileid<<endl;
        cout<<"Mobile Name: "<<mobiles[c].mobilename<<endl;
        cout<<"Mobile Price: "<<mobiles[c].price<<endl;
        cout<<endl;

        c--;
    }

    return 0;
}







