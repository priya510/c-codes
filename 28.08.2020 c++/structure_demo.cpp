/*
    struct keyword
*/
#include<iostream>
using namespace std;

struct Book
{
    int bookid;
    string bookname;
};

int main()
{
    Book b1;
    b1.bookid=123;
    b1.bookname="Harry Potter";

    cout<<"Book Id: "<<b1.bookid<<endl;
    cout<<"Book Name: "<<b1.bookname<<endl;
}
