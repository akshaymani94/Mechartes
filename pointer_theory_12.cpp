#include<iostream>
using namespace std;

void fun(int **p1)
{
    *p1=*p1+1;
}


int main()
{
    int n = 10;
    int *p = &n;     
    int **p2 = &p;
    // int ***p3= &p2;
    // cout<<p<<endl;
    // cout<<p2<<endl;
    // cout<<&p<<endl;
    // cout<<p3<<endl;
    // cout<<&p2<<endl;

    // to make 10 to 15

    // *p = *p+5;
    // **p2 = **p2+5;
    // ***p3 = ***p3+5;

    // cout<<n<<endl;

    cout<<p<<endl;
    fun(p2);            // address of p changes
    cout<<p<<endl;



    return 0;
}