#include<iostream>
using namespace std;

int main()
{
    int n, arr[100];
    arr[0]=0,arr[1]=1;
    cout<<"Enter the position of the number required : "<<endl;
    cin>>n;

    for(int i=2;i<=n-1;++i)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }

    cout<<"The element is : "<<arr[n-1];


    return 0;
}   