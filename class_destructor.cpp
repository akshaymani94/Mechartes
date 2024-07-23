#include<iostream>
using namespace std;

class Customer
{
    public:
    string name;
    int * balance;

    Customer(string name, int bal)
    {
        this->name=name;
        balance = new int;
        *balance = bal;
    } 

    ~Customer() 
    {
        cout<<"Destructor called"<<endl;   // this is what a destructor will do if it is not called manually. This will be done by default
        delete balance;
    }
};

int main()
{
    Customer A1("Rohit",1000);
    return 0;
}