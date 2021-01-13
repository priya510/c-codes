// WAP in c++ to create inheritance example for following:
//There two type of books HardWareBook and SoftwareBook:

/*Hardwarebook contains bookid,bookname,price,category.
Softwarebook contains bookid,bookname,price,version.


Book
	-bookid
	-bookname
	-price


HardwareBook
	-category

SoftwareBook
	-version */



#include<iostream>
using namespace std;

class Book                        //Base
{

    public:
        int bookid,bookprice,version;
        string bookname,category;
        void bookdetails()
        {
            cout<<"enter book details:\n"<<endl;

        }

        void display()
        {
            cout<<"enter bookid:\n"<<endl;
            cin>>bookid;
            cout<<"enter bookname:\n"<<endl;
            cin>>bookname;
            cout<<"enter bookprice:\n"<<endl;
            cin>>bookprice;
        }


};

class HardwareBook : public Book   //Derived
{
    public:

    void hardwarebookdetails()
    {
            cout<<"------enter hardwarebook details-----\n"<<endl;

            cout<<"Category of book:"<<endl;
            cin>>category;
    }

};

class SoftwareBook : public HardwareBook    //Derived
{
    public:


    void softwarebookdetails()
    {
            cout<<"---------enter softwarebook detail--------:\n"<<endl;

            cout<<"Version of books:"<<endl;
            cin>>version;

    }
};


int main()
{

    SoftwareBook s;
    s.bookdetails();
    s.display();
    s.hardwarebookdetails();
    s.softwarebookdetails();



    return 0;
}
