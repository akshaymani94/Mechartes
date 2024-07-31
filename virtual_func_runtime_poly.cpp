#include<iostream>
using namespace std;

class Animal
{
    public:
    void speak()
    {
        cout<<"Hu Hu"<<endl;
    }
};

class Dog : public Animal
{
    public:
    void speak()
    {
        cout<<"Bark"<<endl;
    }
};

int main()
{
    Animal *P;
    P = new Dog();
    P->speak();
    
    return 0;
}