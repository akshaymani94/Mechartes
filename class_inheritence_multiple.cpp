#include<iostream>
using namespace std;

class Engineer
{
    public:
    string specialization;

    void work()
    {
        cout<<"Specialization in : "<<specialization<<endl;
    }
};

class Youtuber
{
    public:
    int subscribers;

    void contentcreator()
    {
        cout<<"Subscribers are : "<<subscribers<<endl;
    }
};

class codeTeacher : public Engineer , public Youtuber
{
    public:
    string name;

    codeTeacher(string name, string specialization , int subscribers)
    {
        this->name = name;
        this->specialization = specialization;
        this->subscribers = subscribers;
    }

    void display()
    {
        cout<<"My name is : "<<name<<endl;
        work();
        contentcreator();
    }

};


int main()
{
    codeTeacher A1("Rohit","CSE",49000);
    A1.display();
    return 0;
}