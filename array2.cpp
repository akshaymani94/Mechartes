#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    cout<<arr[5]<<endl;
    int a;
    char b;
    float c;
    double d;
    bool e;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(e)<<endl;
    cout<<sizeof(arr)<<endl;

    // number of elements
    cout<<sizeof(arr)/sizeof(arr[0])<<" ";



    return 0;
}