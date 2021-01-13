//Inheritance Demo
//Inheritance is used to access or
//reuse all the possible properties from one class to another.


//Function overriding/Dynamic Polymorphism
//Use a function from one class to another

#include<iostream>
using namespace std;

class Animal                        //Base
{
    public:
    void foodHabits()
    {

    }

    void nooflegs()
    {
        cout<<"4 legs"<<endl;
    }
};

class Carnivorous : public Animal   //Derived
{
    public:
    void foodHabits()
    {
        cout<<"Carnivorous eats only meat"<<endl;
    }
};

class Herbivorous : public Animal   //Derived
{
    public:
    void foodHabits()
    {
        cout<<"Herbivorous eats only plants"<<endl;
    }
};


int main()
{
    Carnivorous c;
    Herbivorous h;

    c.foodHabits();
    c.nooflegs();
    h.foodHabits();
    h.nooflegs();

    return 0;
}
