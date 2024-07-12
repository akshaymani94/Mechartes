#include<iostream>
using namespace std;

//         1
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
int main()
{
    int row,col,n;
    cout<<"Enter the numnber: ";
    cin>>n;
    
    for (row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            cout<<"  ";
        }
        for(col=row; col>=1; --col)
        {
            cout<<col<<" ";
        }
        for(col=2; col<=row; ++col)
        {
            cout<<col<<" ";
        }

        cout<<endl;

    }
    return 0;
} 