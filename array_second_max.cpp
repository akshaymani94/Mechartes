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

    int max=ans;

    int ans2=INT32_MIN;
    for (int i=0;i<5;++i)
    {
        if(arr[i]==max)
        continue;

        else if (arr[i]>ans2)
        {
            ans2=arr[i];
        }
                
    }

    cout<<"Second max : "<<ans2<<endl;
    return 0;
}