#include<iostream>
using namespace std;

class Human
{
    protected:
    string name;
    int age;

    public:
    Human (string name, int age)
    {
        this->name =name;
        this->age =age;
    }
};

class Student : public Human
{
    int roll_number, fees;

    public:
    Student(string name, int age, int roll_number, int fees) : Human (name,age )
    {
        
        this->roll_number = roll_number;
        this->fees = fees;
    }

    void display()
    {
        cout<<name<<" "<<age<<" "<<roll_number<<" "<<fees<<" "<<endl;
    }

};

int main()
{
    Student A1("Rohit",12,10,59);
    A1.display();
    return 0;
}