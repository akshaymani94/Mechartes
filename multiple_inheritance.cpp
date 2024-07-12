#include <iostream>
using namespace std;

/*Syntax of multiple inheritance

class Derived: visibility-mode base1, visibility_mode base2
{

};

*/

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1 , public Base2
{
    public:
    void show()
    {
        cout<<"The value of Base1int is "<<base1int<<endl;
        cout<<"The value of Base2int is "<<base2int<<endl;
        cout<<"The sum of these values  is "<<base1int+base2int<<endl;

    }
};


/*
The inherited Derived class will look something like this

base1int --> protected
base2int --> protected


member function 
set_base1int() --> public
set_base2int() --> public
show()         --> public
*/


int main()
{
    Derived harry;
    harry.set_base1int(23);
    harry.set_base2int(5);
    harry.show();

    return 0;
}