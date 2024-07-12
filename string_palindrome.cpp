#include<iostream>
using namespace std;

// int main()
// {
//     string s;
    
//     cout<<"Enter the string to be checked"<<endl;
//     getline(cin,s);

//     int start = 0;
//     int end = (s.size())-1;

//     int t=0;
//     while (start<end)
//     {
//         if(s[start]==s[end])
//         {
//             start++;
//             end--;
//         }

//         else
//             {
//             t=1;
//             break;
//             }
//     }

//     if (t==0)
//     {
//         cout<<"Palindrome";
//     }
//     else
//         cout<<"Not a palindrome";

//     return 0;
// }

    int main()
    {
        string s2 = "namsan";
        int start = 0,end = s2.size()-1;

        while(start<end)
        {
            if(s2[start]!=s2[end])
            {
                cout<<"Not a palindrome";
                return 0;
            }
            start++,end--;
        }


    cout<<"It is a palindrome";
    return 0;
    }
