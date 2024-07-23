#include<iostream>
using namespace std;

int main()
{
    int L,B,H;
    cin>>L>>B>>H;

    int ***ptr = new int**[L];

    // CREATE 2D ARRAY AND STORE ITS ADDRESS IN PTR

    for(int i=0;i<L;++i)
    {
        ptr[i] = new int*[B];

        for(int j =0;j<B;j++)
        {
            ptr[i][j]=new int[H];
        }

    }


    for(int i=0;i<L;i++)
    for(int j=0;j<B;j++)
    for(int k=0;k<H;k++)
    ptr[i][j][k] = i+j+k;

    for(int i=0;i<L;i++)
    for(int j=0;j<B;j++)
    for(int k=0;k<H;k++)
    cout<<ptr[i][j][k]<<" ";


// MY CODE FOR DELETING 3D ARRAY FROM THE HEAP

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < B; j++)
        {
            delete[] ptr[i][j];
        }
        delete[] ptr[i];
    }
    delete[] ptr;
    



    return 0;
}