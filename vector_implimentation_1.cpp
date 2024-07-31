#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;

    v[1]=5;

    vector<int>v1(5,1);
    cout<<"Size of v1: "<<v1.size()<<endl;
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;   // when we initialize a vecotr then its capacity will be same as that of its size.

    v1.push_back(8);
    cout<<"Size of v1: "<<v1.size()<<endl;
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;

    vector<int>v2 = {1,2,3,4,5};
    cout<<"Size of v2: "<<v2.size()<<endl;
    cout<<"Capacity of v2: "<<v2.capacity()<<endl;

    vector<int>v3;
    v3.push_back(4);
    v3.push_back(14);
    v3.push_back(41);
    v3.push_back(34);
    v3.push_back(4);
    cout<<"Size of v3: "<<v3.size()<<endl;
    cout<<"Capacity of v3: "<<v3.capacity()<<endl;


    v3.pop_back();
    cout<<"Size of v3: "<<v3.size()<<endl;
    cout<<"Capacity of v3: "<<v3.capacity()<<endl;

// Erasing element from the beginning
    v3.erase(v3.begin()+1);
    cout<<"Size of v3: "<<v3.size()<<endl;
    cout<<"Capacity of v3: "<<v3.capacity()<<endl;


    for (int  i = 0; i < v3.size(); i++)
    {
        cout<<v3[i]<<" ";
    }
    cout<<endl;

// To insert element in between
    v3.insert(v3.begin()+1,50);

    for (int  i = 0; i < v3.size(); i++)
    {
        cout<<v3[i]<<" ";
    }
    cout<<endl;

    v3[1]=37;
    for (int  i = 0; i < v3.size(); i++)
    {
        cout<<v3[i]<<" ";
    }
    cout<<endl;

    




    return 0;
}