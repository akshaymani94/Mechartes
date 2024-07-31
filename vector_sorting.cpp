#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>ans;
    ans.push_back(5);
    ans.push_back(523);
    ans.push_back(15);
    ans.push_back(154);
    ans.push_back(25);

    // sorting in ascending order

    sort(ans.begin(),ans.end());

    for(int i=0; i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    // cout<<endl;

    // sort in descending order
    // sort(ans.begin(),ans.end(), greater<int>());

    // for(int i=0; i<ans.size();i++)
    // {
    //     cout<<ans[i]<<" ";
    // }

    // cout<<endl;

    //     // sort in descending order
    // sort(ans.rbegin(),ans.rend());

    // for(int i=0; i<ans.size();i++)
    // {
    //     cout<<ans[i]<<" ";
    // }

    // cout<<endl;

    // search in binary search
    // output 1 for yes 0 for no
    cout<<binary_search(ans.begin(),ans.end(),54)<<endl;
    cout<<binary_search(ans.begin(),ans.end(),154)<<endl;

    // to find index of element

    cout<<find(ans.begin(),ans.end(),154)-ans.begin();








}