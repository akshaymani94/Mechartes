#include<iostream>
using namespace std;

class Human
{
    public:
    string name;

    int age,weight;

};

class Student : protected Human
{
    private:
    int roll_number,fee;

    public:
    void fun (string n, int a, int w)
    {
        name = n;
        age = a;
        weight = w;
    }

    void display()
    {
        cout<<name<<" "<<age<<" "<<weight<<endl;
    }

};


int main()
{
    Student A;
   // A.name;
    A.fun("Rohit",10,50);
    A.display();
    
    return 0;
}