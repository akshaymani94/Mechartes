#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n, int key)
{
    int start =0, end =n-1, mid;

    while(start<=end)
    {
        mid = (start+end)/2;

        if(arr[mid]==key)
        return mid;

        else if (arr[mid]<key)
        {
            start = mid+1;
        }

        else
        end = mid-1;
    }

return -1;

}


int main()
{
    int arr[100],n;


    // Adding elements into array.

    cout<<"Enter size of array : ";
    cin>>n;

    cout<<"Enter elements into array in ascending order: "<<endl;
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter element to search : "<<endl;
    cin>>key;

    cout<<BinarySearch(arr,n,key)<<endl;
    return 0;

}



