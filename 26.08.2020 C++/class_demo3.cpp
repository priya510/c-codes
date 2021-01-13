#include<iostream>
using namespace std;

class Product
{
    public:
    int productid;
    string productname;
    float price;
};

int main()
{
    Product products[2];

    cout<<"Enter two products:\n"<<endl;
    for(int i=0;i<=1;i++)
    {
        Product p;

        cout<<"Enter Product Name"<<endl;
        cin>>p.productname;

        cout<<"Enter Product id"<<endl;
        cin>>p.productid;

        cout<<"Enter Product Price"<<endl;
        cin>>p.price;

        products[i]=p;

        cout<<endl;
    }

    cout<<"\nProduct Details\n";
    for(int i=0;i<=1;i++)
    {
        cout<<"Product Id: "<<products[i].productid<<endl;
        cout<<"Product Name: "<<products[i].productname<<endl;
        cout<<"Product Price: "<<products[i].price<<endl;
        cout<<endl;
    }

    return 0;
}
