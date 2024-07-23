#include<iostream>
using namespace std;

// how many objects are there in our class

class Customer
{
    string name;
    int acc_num,balance;

    static int total_customer;   //  will be shared by all the objects
    public:

    /*this is part of the class. This does not belong to the object
    This is only created once. Not like name acc_num and balance which are
    created when ever the object of the class is created, but this is created when class is created and it will be common for all the objects
    They are attributes of class. We can access it without objects */ 
    Customer(string a, int b, int c)
    {
        name = a;
        acc_num = b;
        balance = c;

        total_customer++ ;
    }

    void display()
    {
        cout<<name<<" "<<acc_num<<" "<<balance<<" "<<total_customer<<endl;
    }

    // if total_member is private member then we cannot access. To access 
    // this we use static member function

};

int Customer::total_customer = 0;

int main()
{
    Customer A1("Rohit", 1 , 1000); 
    A1.display();
    Customer A2("Mohit", 2 , 1010);
    A2.display();
    Customer A3("Mohit", 3 , 2000); 
    A3.display();

 //   Customer::total_customer = 5;      // class member can be accessed. It should be static and public.
    A3.display();











    return 0;
}