#include<iostream>
using namespace std;

// *
// **
// ***
// ****
// *****

int main()
{   
    for (int i=1;i<=5;i++)
    {
        for (int j=i;j>=1;--j)   //for (j=1;j<=i;j++)
        {
             cout<<"*"<<" ";
        } 
        cout<<endl;
    }
    
    return 0;
}