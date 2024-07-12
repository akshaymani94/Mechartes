#include<iostream>
using namespace std;

// given n
//         *
//       * *
//     * * *
//   * * * *
// * * * * *

int main()
{

    int row,col,n;
    cout<<"Enter value of n : ";
    cin>>n;
    for (row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            if((row+col)>=n+1)
            {
                cout<<"*";
                cout<<" ";
            }
            else
            {
                cout<<" ";
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;



}