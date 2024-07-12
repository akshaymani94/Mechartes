#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {12,35,2,74,96};
    int ans = INT32_MAX;
    
    for(int i=0; i<5; ++i)
    {
        if (arr[i]<ans)
        {
            ans = arr[i];
        }
    }
    cout<<"Min is : "<<ans<<endl;

    ans = INT32_MIN;
    
    for(int i=0; i<5; ++i)
    {
        if (arr[i]>ans)
        {
            ans = arr[i];
        }
    }

    cout<<"Max is : "<<ans<<endl;
    return 0;
}