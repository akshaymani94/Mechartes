#include<iostream>
using namespace std;

//         *
//       * *
//     * * *
//   * * * *
// * * * * *

int main()
{

    int row,col;
    for (row=1; row<=5; row++)
    {
        for(col=1; col<=5; col++)
        {
            if((row+col)>=6)
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