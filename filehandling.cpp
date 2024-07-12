#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("zoom.txt"); // opens the file if it exits or creates a new one
    fout<<"Hello India";
    fout.close();

    
    return 0;
}