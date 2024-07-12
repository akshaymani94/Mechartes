#include<iostream>
using namespace std;
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1 
int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for(col = row; col >= 1; col--)
        {
            cout<<col<<" ";    
        }
        cout<<endl;
    }
    
    return 0;
}