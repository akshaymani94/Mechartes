#include<iostream>
using namespace std;

int main()
{
    // int arr[] = {1,2,3,4,5,6,7,8,9};
    // int arr[6] = {1,2,3};
    // int arr[6]={0}; // only possible for 0
    int size;

    cout<<"Enter the size: ";
    cin>>size;

    //int arr[size];             // This is a bad practice. use arr[1000]
    int arr[1000];
    for(int i=0;i<size;++i)
    {
        cin>>arr[i];
    }


    for(int i=0;i<size;++i)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}