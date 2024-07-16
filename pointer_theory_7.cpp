#include<iostream>
using namespace std;

void dof(int *p)        // int p[]      both means the same
{
    for(int i=0;i<5;++i)
    p[i]=2*p[i];     // or      *(p+i) = *(p+i)*2;

}

int main()
{
    int arr[5] = {1,2,3,4,5};
    dof(arr);           // passing address
    for(int i =0;i<5;++i)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}  