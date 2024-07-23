#include<iostream>
using namespace std;

class Customer
{
    string name;
    int account_number,balance;
    static int total_customer;
    static int total_balance;
    
    public:
    Customer(string name, int account_number, int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_customer++;
        total_balance = balance + total_balance;
    }
    
    // static membesr function
    static void acceStatic() 
    {
        cout<<"Total number of customers: "<<total_customer<<endl;
        cout<<"Total balance: "<<total_balance<<endl;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance = balance + amount;
            total_balance = total_balance + amount;
        }

    }

    void withdraw(int amount)
    {
        if (amount <= balance && amount > 0)
        {
            balance = balance - amount;
            total_balance = total_balance - amount;
        }

    }

    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer;
    }

    void display_total()
    {
        cout<<total_customer<<endl;
    }

};

int Customer::total_customer = 0 ;
int Customer::total_balance = 0 ;


int main()
{
    Customer A1("Rohit",1,1000);
    Customer A2("Mohit",2,2000);
    Customer A3("HitMAN",3,10000);
    A1.deposit(800);
    A2.withdraw(400);
    Customer::acceStatic();
   // Customer::display_total();    not possible. Display total can only be accessed by object of the class
    A1.display_total();
    // A2.display_total();
    // A3.display_total();

    A1.deposit(800);
    

    return 0;
}