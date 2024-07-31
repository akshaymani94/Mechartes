#include<iostream>
using namespace std;

// making your own exception class

class InvalidAmountError : public runtime_error
{
    public:
    InvalidAmountError(const string &msg) : runtime_error(msg)
    {};
};

class InsufficientAmountError : public runtime_error
{
    public:
    InsufficientAmountError(const string &msg) : runtime_error(msg)
    {};
};



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
            throw InvalidAmountError("Amount should be greater than 0");
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
            throw InvalidAmountError("Amount should be greater than 0");
        }

        else
        {
            throw InsufficientAmountError("Your balance is less");
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

  
    catch(const InvalidAmountError &e)          // to increase code readability
    {
        cout<<"Exception occured: "<<e.what()<<endl;
    } 

    catch(const InsufficientAmountError &e)
    {
        cout<<"Exception occured: "<<e.what()<<endl;
    } 

    catch(...)              // default
    {
        cout<<"Exception occured: "<<endl;
    }

    return 0;
}