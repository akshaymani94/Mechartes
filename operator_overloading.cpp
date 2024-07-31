#include<iostream>
using namespace std;

class Complex
{
    int real, img;

    public:

    Complex()
    {

    }

    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;

    }

    void display()
    {
        cout<<real<<" + i"<<img<<endl;
    }

    Complex operator +(Complex &C)      // operator overloading
    {
        Complex ans;
        ans.real = real + C.real;           // within the class we can access the objects of the same class type. 
        ans.img = img + C.img;
        return ans;

    }

};


int main()
{
    Complex C1(3,4);
    Complex C2(4,6);

    Complex C3 = C1+C2;   // C1 has called the function and C2 has gone as argument  C1.fun(C2)
    C3.display();

    return 0;
}

// we can operate maximum operators like this.
