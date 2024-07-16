#include<iostream>
using namespace std;

int main()
{
    // memory allocaton for variable in heap
    int *ptr = new int; 
    *ptr = 5;
    cout<<*ptr<<endl;

    float *ptr2 = new float;
    *ptr2 = 3.6;
    cout<<*ptr2<<endl;

    int n;
    cout<<"Enter size : ";
    cin>>n;
    // int arr[n];             // should not be done because the memory allocation is happening in the stack. So if user types a very large value, the stack with a size of 8mb will not be able to handle this requirment.

    int *p = new int[n];

    cout<<"Enter the numbers into the array: "<<endl;
    for(int i=0;i<n;++i)
    {
        cin>>p[i];
    }

    for(int i=0;i<n;++i)
    {
        cout<<p[i]<<" ";
    }

    delete ptr;
    delete ptr2;
    delete[] p;

    return 0;
}