#include<iostream>
using namespace std;
// inserstion sort in descending order
int main()
{
    int arr[100];

    int i,j,n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter elements into array : "<<endl;
    for(i=0;i<n;++i)
    {
        cin>>arr[i];
    }

    for (i=0;i<n-1;i++)
    {
        for(j=i+1;j>0;--j)
        {
            if(arr[j]>arr[j-1])
            swap(arr[j],arr[j-1]);
        }
    }

    cout<<"Insertion sorted array : "<<endl;
    for(i=0;i<n;++i)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}