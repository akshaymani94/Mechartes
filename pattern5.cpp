#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    int row, col;

    for (row=1;row<=5;row++)
    {
        for (col=1;col<=5;col++)
        {
            cout<<pow(col,2)<<" ";
        } 
        cout<<endl;
    }
    return 0;
} 