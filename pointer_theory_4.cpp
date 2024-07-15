#include<iostream>
using namespace std;

int main()
{
    char arr[5] = {'1', '2', '3', '4', '5'};
    // int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    char *ptr = arr;     // or   int *ptr = &arr[0];
    cout<<endl<<ptr;

    char name = 's';
    char *ptr2;
    ptr2=&name;

    cout<<endl<<ptr2;
        

    return 0;
}