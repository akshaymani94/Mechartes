#include<iostream>
using namespace std;

int main()
{
    int a = 10;

    cout<<&a<<endl;
    int *ptr = &a;
    cout<<ptr<<endl;

    cout<<"The size of pointer : ";   // will be 4 byte for 4gb ram system or 32 bit system
    cout<<sizeof(ptr)<<endl;           // will be 8 byte for 64 bit ie greater than 4 gb
    
    float m = 2.6;
    float *ptr1 = &m;

    cout<<ptr1<<endl;    
    cout<<"The size of pointer : ";   // will be 4 byte for 4gb ram system or 32 bit system
    cout<<sizeof(ptr1)<<endl; 

    // size of pointer does not depend on the variable to which it is pointing
    return 0;
}