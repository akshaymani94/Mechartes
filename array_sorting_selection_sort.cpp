#include<iostream>
using namespace std;

int main()
{
    int arr[100],index,n;
    cout<<"Enter size of array : ";
    cin>>n;

    cout<<"Enter elements :"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int i=0;i<n-1;i++)   
    {
        index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[index])
            {
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}