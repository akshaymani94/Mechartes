#include<iostream>
using namespace std;

class Human
{   
    protected:
    string name;
    int age;

    public:
    Human(string name, int age)
    {
        cout<<"Human constructor called "<<endl;
        this->name = name;
        this->age =age;
    }
};

class Employee : public Human
{
    protected:
    string company;
    int salary;

    public:
    Employee(string name, int age, string company, int salary):Human(name,age)
    {
        cout<<"Employee constructor called "<<endl;
        this->company = company;
        this->salary = salary;
    }

    void display()
    {
        cout<<name<<" "<<age<<" "<<company<<" "<<salary<<endl;
    }
};


int main()
{

    Employee E1("Akshay",29,"Mechartes",10);
    E1.display();
    return 0;
}