#include<iostream>
using namespace std;

// * * * * *
// * * * *
// * * * 
// * * 
// *

int main()
{
    // int row,col;
    // for (row=0; row<=5; row++)
    // {
    //     for (col=5; col>=row; col--)
    //     {
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    // return 0;

    int row,col;
    for (row=0; row<=5; row++)
    {
        for(col=1;col<=(5-(row-1));col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;



}