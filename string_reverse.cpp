#include<iostream>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the string to reverse"<<endl;
    getline(cin,s);

    int start = 0;
    int end = (s.size())-1;
    
    while (start<end)
    {
        char temp;          // or use swap(s[start],s[end])
        temp = s[start];
        s[start]=s[end];
        s[end] = temp;

        start++;
        end--;
    }

    // cout<<s[start]<<endl;
    // cout<<s[end]<<endl;

    cout<<s;

    return 0;
}