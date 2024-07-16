#include<iostream>
using namespace std;

void swapping(int *m, int *n)   // pass by pointer
{
    int temp = *m;
    *m = *n;
    *n = temp;
}


int main()
{
    int a=10 , b=20;
    swapping(&a,&b);
    cout<<"Swapped value of a : "<<a<<endl;
    cout<<"Swapped value of b : "<<b<<endl;

    return 0;
}