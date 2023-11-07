/*#Write C++ Program to Check Armstrong Number using function?*/
#include<iostream>
using namespace std;
int main ()
{
    int num, rem, temp, sum = 0;

    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;
    cout << "Enter number :: ";
    cin >> num;
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + rem*rem*rem;
        temp = temp / 10;
    }
    if (sum == num)
        cout << num << " is an Armstrong number";
    else
        cout << num << " is not an Armstrong number";

    return 0;
}