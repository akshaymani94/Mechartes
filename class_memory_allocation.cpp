#include<iostream>
using namespace std;

// Dynamic memory allocation in Heap

class Student
{
    public:
    string name;
    int age, roll_number;
    string grade;

};

int main()
{
    Student *S = new Student;
    (*S).name = "Akshay";
    (*S).age = 2;
    (*S).roll_number = 12;
    (*S).grade = "S";

    cout<<S->name<<" ";
    cout<<S->age<<" ";
    cout<<S->roll_number<<" ";
    cout<<S->grade<<" ";


    return 0;


}


