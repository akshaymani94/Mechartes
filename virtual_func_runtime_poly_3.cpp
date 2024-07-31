#include<iostream>
using namespace std;

class Animal
{
    public:
    virtual void speak()           // telling compiler not to decide which function to call during compile time
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

    void roti()
    {
        cout<<"Roti"<<endl;
    }
};

int main()
{
    Animal *P;
    P = new Dog();
    // P->speak();
    //P->roti();      // this will not work

    /*P is a pointer which is poiting to animal type value. */
    
    return 0;
}