#include<iostream>
using namespace std;

// My bubble sort algorithm 
int main()
{
    int n=5,arr[5]={7,4,8,5,3};
    int index = n-1;
    for(int i=0;i<n-1;++i)
    {
        for(int j=0;j<index;++j)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
        index--;
    }

    for (int i=0;i<n;++i)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}