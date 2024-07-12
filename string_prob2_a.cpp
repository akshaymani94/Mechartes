#include<iostream>
using namespace std;

// using pass by reference, checking if the given string is rotated twice in clockwise or anticlockwise

void rotateclockwise(string &a)
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
}

void rotateanticlockwise(string &a)
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
}




int main()
{
    string str1,str2,clockwise,anticlockwise;
    cout<<"Enter string : ";
    getline(cin,str1);
    cout<<"Enter rotated string : ";
    getline(cin,str2);
    clockwise = str1;

    if(str1.size()!=str2.size())
    {
        cout<<"WRONG INPUT";
        exit(0);
    }

    rotateclockwise(clockwise);
    rotateclockwise(clockwise);

    if(clockwise==str2)
    {
        cout<<"Clock twice";
        exit(0);
    }

    anticlockwise = str1;

    rotateanticlockwise(anticlockwise);
    rotateanticlockwise(anticlockwise);

    if(anticlockwise==str2)
    {
        cout<<"Anticlock twice";
        exit(0);
    }

    else
    cout<<"NOT ROTATED";


    return 0;

}