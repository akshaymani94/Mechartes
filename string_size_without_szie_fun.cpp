#include<iostream>
using namespace std;

int main()
{
    string s;
    cout<<"Enter string whose size is to be found"<<endl;
    getline(cin,s);

    int size=0;
    while(s[size] != '\0')
    {
        size++;
    }

    cout<<"The size is : "<<size;
    return 0;
}