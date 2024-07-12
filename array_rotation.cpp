#include<iostream>
using namespace std;

// [1 2 3 4 5] to [5 1 2 3 4]

int main()
{
    int temp,i,arr[5] = {2,4,6,8,10};
    temp=arr[4];
    for(i=4;i>0;--i)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;

    for (i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";   /* code */
    }
    
    
    return 0;
}