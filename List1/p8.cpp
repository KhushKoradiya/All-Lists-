/*#Write a c++ program to find coumpound intrest?*/
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    float p, r, t, interest;
    cout << "Enter the Principal amount: ";
    cin >> p;
    cout << "Enter the Rate of interest: ";
    cin >> r;
    cout << "Enter the time period: ";
    cin >> t;
    interest = p * (pow((1 + r / 100),t))-p;
    cout << "The compound interest is: " << interest;
    return 0;
}