#include<iostream>

using namespace std;

int main()
{
    int index=0;
    string ans,address;
    cout<<"Enter the IP address : "<<endl;
    getline(cin,address);
    while(index<address.size())
    {
        if(address[index]=='.')
        {
            ans=ans+"[.]";
        }
        else
        ans=ans+address[index];

        index=index+1;
    }

    cout<<"The output is : ";
    cout<<ans;
    return 0;
}