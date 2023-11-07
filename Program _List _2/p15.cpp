/*#Write a c++ program to calculate square of given number using inline function?*/
#include<iostream>
using namespace std;

inline int square(int n)
{
    return n* n;

}
int main()
{
    int n;
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;
    cout<<"Enter the Number ::";
    cin>>n;
    cout<<"The Square of "<< n <<" is "<< square(n)<<endl;
    return 0;

}