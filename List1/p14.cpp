/*#Write C++ Program to Check Whether a Number is a Palindrome or Not using function?*/
#include<iostream>
using namespace std;
int main()
{
    int num, rev=0, rem, temp;
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;
    cout<<"Enter the Number: ";
    cin>>num;
    temp = num;
    while(temp>0)
    {
        rem = temp%10;
        rev = (rev*10)+rem;
        temp = temp/10;
    }
    if(rev==num)
        cout<< num <<" is a Palindrome Number";
    else
        cout<< num << " is not a Palindrome Number";
        cout<<endl;
    return 0;
}
