/*#write a C++ program to swap two numbers?*/
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    cout<<"Before swapping:: "<<a <<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping:: "<<a <<endl;
    return 0;
}