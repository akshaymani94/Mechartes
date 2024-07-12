#include<iostream>
using namespace std;

int main()
{
    string s1 = "Akshay";
    string s2 = " Mani";
    string s3 = s1 +s2;
    string s7 = s1.append(s2);

    cout<<s3<<endl;
    cout<<s7<<endl;

    string s4 = "Rohi";
    string s8 = s4;
    // string s5 = s4.push_back('t'); //The push_back function modifies the string in place and does not return a string, so you should not assign the result to another string. 
    s4.push_back('t');  // or s4 = s4 + "p"
    s8 = s8 + "p";
    cout<<s4<<endl;
    cout<<s8<<endl;

    string s5= "Dakshitt";
    s5.pop_back();
    cout<<s5<<endl;

    string s6= "Rohit is a \"good\" boy ";
    cout<<s6<<endl;
    return 0;
}