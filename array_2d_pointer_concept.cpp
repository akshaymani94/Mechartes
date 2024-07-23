#include<iostream>
using namespace std;

int main()
{
    // array creation
    int n,m;
    cout<<"Enter rows and column :"<<endl;
    cin>>n>>m;  // n rows and m columns

    int **ptr = new int*[n];
    
    for (int i =0;i<n; i++)
    {
      ptr[i] = new int[m];
    }

    //add value to matrix
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>ptr[i][j];


    // print matrix
    cout<<endl<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
    }

    // release memory from heap

    for(int i=0;i<n;i++)
    {
        delete[] ptr[i];
    }
    delete[] ptr;

    


    return 0;
}