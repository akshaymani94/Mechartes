#include<iostream>
using namespace std;

// void incr(int n)
// {
//     n++;
// }

// int main()
// {
//     int num=10;
//     int temp=num;
//     incr(num);
//     cout<<num<<endl;
//     return 0;
// }

void incr(int *ptr)
{
    *ptr = *ptr +1;
}

int main()
{
    int num=10;
    int temp=num;
    incr(&num);
    cout<<num<<endl;
    return 0;
}