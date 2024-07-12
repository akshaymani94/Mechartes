#include<iostream>
using namespace std;

int eleSearch(int j,int k[]);

int main()
{
    int arr[5],s, pos;
    cout<<"Enter 5 elements into your array : "<<endl;
    
    for (int i=0; i<5; ++i)
    {
        cin>>arr[i];
    }


    cout<<"Enter element to search : ";
    cin>>s;

    pos = eleSearch(s,arr);

    if(pos!=0)
    cout<<"The position of the element is : "<<pos+1;
    
    else
    cout<<"Element not found.";

    return 0;
}

int eleSearch(int a, int b[])
{
    int c=0;
    for (int i =0 ;i<5; ++i)
    {
        if(b[i]==a)
        {
            c=i;
            break;
        }
    }
    return c;
}