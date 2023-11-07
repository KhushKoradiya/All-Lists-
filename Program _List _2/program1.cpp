/*#write a c++ program to access global variable using scope resolution operator without using class?*/
#include<iostream>
using namespace std;
int y=20; //Global
int main()
{
    int y=10; // Local
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;
    cout<<"Value of Global y is "<<::y<<endl;
    cout<<"Value of Local y is "<<y;

    return 0;
}
