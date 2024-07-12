#include<iostream>
using namespace std;

// checking if the given string is rotated twice in clockwise or anticlockwise

string rotateClock(string a)
{
    char temp;
    int index;
    index = (a.size()-2);
    temp = a[a.size()-1];
    while(index>=0)
    {
        a[index+1]=a[index];
        index--;
    }
    a[0]=temp;

    return a;
}

string rotateAntiClock(string a)
{
    char temp;
    int index;
    index = 1;
    temp = a[0];
    while(index<=(a.size()-1))
    {
        a[index-1]=a[index];
        index++;
    }
    a[(a.size()-1)]=temp;

    return a;
}




int main()
{
    string s,s1,s2,s3,s4,s5;
    cout<<"Enter string : ";
    getline(cin,s);
    cout<<"Enter rotated string : ";
    getline(cin,s1);

    s2=rotateClock(s);
    s3=rotateClock(s2);



    s4=rotateAntiClock(s);
    s5=rotateAntiClock(s4);

    if(s3==s1)
    {
        cout<<"Clock 2"<<endl;
    }

    else if(s5==s1)
    {
        cout<<"AntiClock 2"<<endl;
    }

    else
    cout<<"Incorrect";

    return 0;
}