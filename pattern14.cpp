#include<iostream>
using namespace std;
// a
// b b
// c c c
// d d d d
// e e e e e 
int main()
{
    int row, col;
    char name;
    for (row = 1; row <= 5; row++)
    {
        name = 'a';
        name = name + (row-1);
        for(col = row; col >= 1; col--)
        {
            cout<<name<<" ";    
        }
        cout<<endl;
    }
    
    return 0;
}