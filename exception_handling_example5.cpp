#include<iostream>
using namespace std;

// different types of exceptions

class Customer
{
    string name;
    int balance, account_number;

    public:

    Customer(string name, int balance, int account_number)
    {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+= amount;
            cout<<amount<<" Rs is credited successfully"<<endl;
        }

        else
        {
            throw runtime_error("Amount should be greater than 0");
        }

    }

    void withdraw(int amount)
    {
        if(amount>0 && amount<=balance)
        {
            balance-= amount;
            cout<<amount<<" Rs is debited successfully"<<endl;
        }

        else if(amount<0)
        {
            throw runtime_error("Amount should be greater than 0");
        }

        else
        {
            throw ("Your balance is less");
        }
    }
};

int main()
{
    Customer C1("Rohit",5000,123);
    try
    {
    C1.deposit(100);
    C1.withdraw(6000);    
    C1.deposit(100);        // this statement will not get executed
    }
    catch(const runtime_error &e)          // becoz msg is a char type array
    {
        cout<<"Exception occured: "<<e.what()<<endl;
    }   


    catch(const bad_alloc &e)
    {
        cout<<"Exception occured: "<<e.what()<<endl;
    } 

    catch(...)              // default
    {
        cout<<"Exception occured: "<<endl;
    }

    return 0;
}