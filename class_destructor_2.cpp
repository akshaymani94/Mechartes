#include<iostream>
using namespace std;

class Customer
{
    string name;
    int* data;

    public:
    Customer()
    {
        name = "Rohit";
        data = new int;
        *data = 100;
        cout<<"Constructor is called: "<<endl;
    }

    ~Customer()
    {
        delete data;
        cout<<"Destrcutor is called: "<<endl;
    }
};


int main()
{
    Customer A1;
    return 0;
}