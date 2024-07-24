#include<iostream>
using namespace std;

class Person
{
    protected:
    string name;

    public:
    void introduce()
    {
        cout<<"My name is : "<<name<<endl;
    }


};


class Employee: public Person
{
    protected:
    int salary;

    public:
    void monthly_salary()
    {
        cout<<"My monthly salary is : "<<salary<<endl;
    }
};

class Manager: public Employee
{
    public:
    string department;

    Manager(string name, int salary, string department)
    {
        this->name = name;
        this->salary = salary;
        this->department = department;
    }


    void work()
    {
        cout<<"I am leading the department "<<department<<endl;
    }

};

int main()
{
    Manager A1("Akshay",2000000,"CFD");
    A1.work();
    A1.monthly_salary();
    A1.introduce();
//   A1.salary = 10;    bcoz salary is protected member of employee it cannot be accessed from outside the class.
    A1.department = "CFD";    // POSSIBLE becoz it is a public member
    return 0;
} 