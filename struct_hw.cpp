//Create a structure to accept three books and store in array and print.

#include<iostream>
using namespace std;

struct Books
{
    public:
    int bookid;
    string bookname;
    float price;
};

int main()
{
    Books books[3];

    cout<<"Enter book details:\n"<<endl;
    for(int i=0;i<=2;i++)
    {
        Books b;

        cout<<"Enter Book Name"<<endl;
        cin>>b.bookname;

        cout<<"Enter Book id"<<endl;
        cin>>b.bookid;

        cout<<"Enter Book Price"<<endl;
        cin>>b.price;

        books[i]=b;

        cout<<endl;
    }

    cout<<"\n book  Details\n";
    for(int i=0;i<=2;i++)
    {
        cout<<"Book Id: "<<books[i].bookid<<endl;
        cout<<"Book Name: "<<books[i].bookname<<endl;
        cout<<"Book Price: "<<books[i].price<<endl;
        cout<<endl;
    }

    return 0;
}
