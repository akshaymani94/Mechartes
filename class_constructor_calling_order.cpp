#include<iostream>
using namespace std;

class Human
{   
    protected:
    string name;
    int age;

    public:
    Human()
    {
        cout<<"Human constructor called "<<endl;
    }

    ~Human()
    {
        cout<<"Human desstructor called "<<endl;
    }
};

class Employee : public Human
{
    protected:
    string company;
    int salary;

    public:
    Employee()
    {
        cout<<"Employee constructor called "<<endl;
    }

    ~Employee()
    {
        cout<<"Employee destructor called "<<endl;
    }
};


int main()
{

    Employee E1;
    return 0;
}