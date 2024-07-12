#include<iostream>
#include<fstream>

using namespace std;

// will not treat " " as a character

// int main()
// {
//     ifstream fin;
//     fin.open("zoom.txt"); 

//     char c;
//     fin>>c;

//     while(!fin.eof())
//     {
//         cout<<c;
//         fin>>c;
//     };

//     fin.close();
    
//     return 0;
// }

// This code will read the space bar

int main()
{
    ifstream fin;
    fin.open("zoom.txt"); 

    char c;
    c = fin.get();
    while(!fin.eof())
    {
        cout<<c;
        c = fin.get();
    };

    fin.close();
    
    return 0;
}


