#include<iostream>
using namespace std;

class Customer
{
    string name;
    int account_number,balance;

    public:
    
    Customer(string name, int account_number, int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }
    

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance = balance + amount;
        }

    }

    void withdraw(int amount)
    {
        if (amount <= balance && amount > 0)
        {
            balance = balance - amount;
        }

    }

    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};


int main()
{
    Customer A1("Rohit",1,1000);
    Customer A2("Mohit",2,2000);
    Customer A3("HitMAN",3,10000);
    //A1.balance+=-10;    // to prevent wrong value into into to variable, we do not allow this and make it private and use function instead.
    // would have been possible if the variable was public.   
    A1.display();
    A1.deposit(-10);    // did not allow this
    A1.display();
    return 0;
}