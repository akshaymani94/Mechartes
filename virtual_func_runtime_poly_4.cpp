#include<iostream>
#include<vector>
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
};

class Cat: public Animal
{
    public:
    void speak()
    {
        cout<<"Meow"<<endl;
    }
};

int main()
{
    // Animal *P;
    // P = new Dog();
    // P->speak();
    // Why are we doing this the complicated way.
    
    Animal *p;
    vector<Animal*>animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Animal());
    animals.push_back(new Dog());
    animals.push_back(new Cat());

    for(int i = 0; i<animals.size(); i++)
    {
        p = animals[i];
        p->speak();
    }


    

    



    return 0;
}