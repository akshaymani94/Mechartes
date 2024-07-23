#include<iostream>
using namespace std;

class Customer
{
    public:
    string name;
    int account_number;
    int balance;

//default constrcutor
    Customer()
    {
        cout<<endl<<"Constructor is called"<<endl;
    }

// Parameterized constructor
    // Customer(string name, int account_number, int balance)
    // {
    //     this->name = name;                            // cannot give same name because it will take what is there in the nearest scope. Therefore we have to use this pointer.
    //     this->account_number = account_number;
    //     this->balance = balance;

    // }

// inline constructors

    inline Customer(string a, int b, int c) : name(a), account_number(b), balance(c) {}



    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    } 
};

int main()
{
    Customer A2;
    Customer A1("Rohit",26565,23);
    A1.display();
    cout<<endl;
    return 0;
}