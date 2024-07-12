#include<iostream>
using namespace std;

int main()
{
    // By taking an extra array
//     int arr[5]={1,2,3,4,5};
//     int temp[5],i=0,j=4;


//     while (j>=0)
//     {
//         temp[j]=arr[i];
//         j--;
//         i++;
//     }

//     cout<<"Reverse array is : "<<endl;
//     for (i=0;i<5;++i)
//     cout<<temp[i]<<" ";
//     return 0;

// without using extra array

int arr[5]={1,2,3,4,5};
int i=0,j=4,temp;
while(i<j)
{
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    // swap(arr[i],arr[j]);
    i++;
    j--;
}

cout<<"Reverse : "<<endl;
for(i=0;i<5;++i)
cout<<arr[i]<<" ";

return 0;

}