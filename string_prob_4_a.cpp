#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>alpha(26,0);
    int i;
    string s;
    cout<<"Enter the string : "<<endl;
    getline(cin,s);


    for(i=0; i<s.size(); ++i)
    {
        alpha[s[i]-'a']++;
    }
    string ans;

    for(i=0; i<26;++i)
    {
        char c = 'a'+i;
        while(alpha[i])
        {
            ans+=c;
            alpha[i]--;
        }
    }

    cout<<"Sorted string \n";
    cout<<ans;


    return 0;
}