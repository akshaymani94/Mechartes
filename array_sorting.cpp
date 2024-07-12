#include<iostream>
using namespace std;

// ascending
// my sorting

int main()
{
    int temp,arr[5]={9,7,3,1,6};

    for(int i = 0; i<5;++i)
    {
        for(int j=i+1; j<5; ++j)
        {
            if(arr[j]<arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0; i<5;++i)
    {
        cout<<arr[i]<<" ";  
    } 
    return 0;
}