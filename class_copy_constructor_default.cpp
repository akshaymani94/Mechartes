#include<iostream>
using namespace std;

class Customer
{
    public:
    string name;
    int account_number;
    int balance;
    int *roi;   

//default constrcutor
    Customer()
    {
        name = "Rohit";
        account_number = 5;
        balance = 100;
        roi =  new int[100];    // initializing things which we may require in the future
        // To make sure that we dont come across and error when we finally need it.
        /*for example if you want to open a file, you can try opening it in
        the constructor itself, so that if you need it some time, you can use it 
        without hesitating wheather it will throw an error or not.*/ 
    }

    Customer (string a, int b, int c)
    {
        name = a;
        account_number = b;
        balance = c;
    }




    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    } 
};

int main()
{
    Customer A1;
    Customer A2("Akshay", 8848, 12);
    Customer A3(A2); // default copy constructor
    A1.display();
    A2.display();
    A3.display();
    cout<<endl;
    return 0;
}