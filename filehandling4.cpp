#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>

using namespace std;

int main()
{ 
    ofstream fout;
    fout.open("z1.txt");
    fout<<"Hi"<<endl;
    fout<<"I am"<<endl;
    fout<<"Akshay"<<endl;
    fout.close();

    ifstream fin;
    fin.open("z1.txt");

    string line;

    while (getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();

    return 0;
}