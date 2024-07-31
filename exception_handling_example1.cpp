#include<iostream>
using namespace std;

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
            cout<<amount<<"rs is credited successfully"<<endl;
        }

        else
        {
            cout<<"Amount should be greater than 0"<<endl;
        }

    }

    void withdraw(int amount)
    {
        if(amount>0 && amount<=balance)
        {
            balance-= amount;
            cout<<amount<<"rs is debited successfully"<<endl;
        }

        else if(amount<0)
        {
            cout<<"Amount should be greater than 0"<<endl;
        }

        else
        {
            cout<<"Your balance is less"<<endl;
        }
    }
};

int main()
{
    Customer C1("Rohit",5000,123);
    C1.deposit(100);
    C1.withdraw(6000);      // NO REPLY GIVEN if the if else was not given
    return 0;
}