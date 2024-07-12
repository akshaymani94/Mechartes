#include<iostream>
using namespace std;

int main()
{
    int sum=0,i,arr[5]={1,2,3,4,5};
    for(i=0;i<5;++i)
    {
        sum = sum +arr[i];
    }

    cout<<"Missing number : "<<21-sum<<endl;

    return 0;
}