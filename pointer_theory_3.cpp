#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;
    cout<<"Address of 1st element"<<endl;
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;

    cout<<"Address of 2nd element"<<endl;
    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;

// to print the value

    cout<<arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*(arr+0)<<endl;
    cout<<*ptr<<endl;

// to print all address

for (int i = 0; i < 5; i++)
{
    cout<<arr+i<<endl;
}


// to print all values
cout<<"1st"<<endl;
for (int i = 0; i < 5; i++)
{
    cout<<*(arr+i)<<endl;
}


int *ptr1 =arr;

// to print all values using pointer
cout<<"2nd"<<endl;
for (int i = 0; i < 5; i++)
{
    cout<<*(ptr+i)<<endl;   // or ptr[i]
}

// to print all values using pointer
cout<<"3rd"<<endl;
for (int i = 0; i < 5; i++)
{
    cout<<ptr[i]<<endl;   // or ptr[i]
}




// to print all values using pointer
cout<<"4th"<<endl;
for (int i = 0; i < 5; i++)
{
    cout<<*ptr<<endl;   // or ptr[i]
    ptr++;
}


    return 0;
}