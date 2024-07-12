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
    for(row=1;row<=5;row++)
    {

        for(col=1;col<=5-row;col++)
        cout<<"  ";

        for(col=1;col<=row;col++)
        cout<<"* ";
    
    cout<<endl;

    }
    return 0;
}