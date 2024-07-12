#include<iostream>
using namespace std;

int main()
{
    int arr[5]={21,35,12,78,96};
    int ans=INT32_MIN;

    for(int i=0;i<5;++i)
    {
        if(arr[i]>ans)
        ans=arr[i];
    }



    int second=INT32_MIN;
    for (int i=0;i<5;++i)
    {
        if(arr[i]!=ans)
        second=max(second,arr[i]);
                
    }

    cout<<"Second max : "<<second<<endl;
    return 0;
}