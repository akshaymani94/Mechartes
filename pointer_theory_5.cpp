#include<iostream>
using namespace std;


int main()
{
    
    char arr[5] = "1234";
    char *ptr = arr;
    cout<<arr<<endl;
    cout<<ptr<<endl;
    cout<<(void*)arr<<endl;
    cout<<(void*)ptr<<endl;

    char name = 'a';
    cout<<name<<endl;
    char *ptr2 = &name;
    cout<<ptr2<<endl;
    cout<<(void*)ptr2<<endl;
    cout<<(void*)&name<<endl;
    cout<<static_cast<void*>(arr)<<endl;
    



    return 0;
}