#include<iostream>
using namespace std;

int main()
{
    int L,B,H,D,i,j,k,l;
    cout<<"Enter size ";
    cin>>L>>B>>H>>D;
    int ****ptr = new int***[L];
    for(i=0;i<L;i++)
    {
        ptr[i]=new int **[B];
            for(j=0;j<B;j++)
            {
                ptr[i][j]=new int* [H];
                for(k=0;k<D;k++)
                {
                    ptr[i][j][k]=new int [D];
                }
            }
    }

    // Entering elements into matrix

    cout<<"Enter elements into array "<<endl;

    for(i=0;i<L;i++)
    for(j=0;j<B;j++)
    for(k=0;k<H;k++)
    for(l=0;l<D;l++)
    {
        ptr[i][j][k][l]=i+j+k+l;
    }

    // Print matrix
    cout<<"The 4D Matrix"<<endl;

    for(i=0;i<L;i++)
    for(j=0;j<B;j++)
    for(k=0;k<H;k++)
    for(l=0;l<D;l++)
    {
        cout<<ptr[i][j][k][l]<<" ";
    }

    // CODE FOR DELETING 4D ARRAY FROM THE HEAP

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < B; j++)
        {
            for (int k = 0; k < H; k++)
            {
                delete[] ptr[i][j][k];
            }    
            delete[] ptr[i][j];
        }
        delete[] ptr[i];  
    }
    delete[] ptr;

    


    return 0;
}