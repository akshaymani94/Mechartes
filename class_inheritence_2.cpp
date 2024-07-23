#include<iostream>
using namespace std;

class Human
{
    string religion,color;
    public:
    string name;

    int age,weight;

};

class Student : private Human
{
    private:
    int roll_number,fee;

    public:
    
    Student (string name, int age, int weight, int roll_number, int fee)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->roll_number = roll_number;
        this->fee = fee;    
    }

    void display()
    {
        cout<<name<<" "<<age<<" "<<weight<<" "<<roll_number<<" "<<fee<<endl;
    }

};


int main()
{
    Student A("Akshay",20,50,12,1);
    A.display();
    return 0;
}