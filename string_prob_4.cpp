#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>count(26,0);     // shows every value is 0 at first
    string s;
    int i,j;
    cout<<"Enter the string : "<<endl;
    getline(cin,s);

    for(i=0; i<(s.size());++i)
    {
        count[s[i]-'a']=count[s[i]-'a']+1;
    }


    cout<<"The sorted string is : "<<endl;
    for(i=0; i<count.size();++i)
    {
        if(count[i]!=0)
        {
            for(j=0;j<count[i];j++)
            {    
                cout<<char(97+i);
            }
        }

    }
    cout<<endl;
    
    return 0;
}