#include<iostream>
using namespace std;

class Animal
{
    public:
    virtual void speak()=0;         // PURE VIRTUAL FUNCTION OR ABSRACT CLASS 
};
// Use if you dont have a general behaviour

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