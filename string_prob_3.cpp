#include<iostream>
#include<vector>

using namespace std;

// checking PANGRAM

int main()
{
    vector <bool> alpha(26,0);
    string s;
    int index,check=0;;
    cout<<"Enter the string : "<<endl;
    getline(cin,s);

    for(int i=0; i<(s.size());++i)
    {
        index = s[i]-'a';
        alpha[index] = 1;
    }

    for(int i=0;i<(alpha.size());i++)
    {
        if(alpha.at(i)==0)
        check=1;
    }

    if(check==0)
    cout<<"YES";
    else
    cout<<"NO";


    return 0;
}