#include<iostream>
using namespace std;

// a a a a a
// b b b b b
// c c c c c
// d d d d d
// e e e e e

// int main()
// {
//     int row, col;

//     for (row=97;row<=101;row++)
//     {
//         for (col=1;col<=5;col++)
//         {
            
//             cout<<char(row)<<" ";
//         } 
//         cout<<endl;
//     }
//     return 0;
// } 

int main()
{
    int row, col;
    char name = 'a';

    for (row=1;row<=5;row++)
    {   
        char name = 'a'+row-1;
        for (col=1;col<=5;col++)
        {
            
            cout<<name<<" ";
        } 
        name = name + 1;
        cout<<endl;
    }
    return 0;
} 