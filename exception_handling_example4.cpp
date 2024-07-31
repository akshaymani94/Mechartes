#include<iostream>
using namespace std;


int main()
{
    try
    {
    int *p = new int[1000000000000];    // here is throw is done by the system by itself. This happens in this type of situations
    cout<<"Memory allocation successful"<<endl;
    delete []p; 
    }

    catch(const exception &e)         // exception is a class
    {
        cout<<"Exception occured due line 9 : "<<e.what()<<endl;
    }
    
    return 0;
}