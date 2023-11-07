/*#Write a c++ Program to enter two numbers and perform all arithmetic operations?*/
#include <iostream>
using namespace std;
int main() 
{
    int x,y, sum, sub, mul, mod;
    float div;
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;

    cout<< "Enter one numbers :: ";
    cin >> x;
    cout<<"Enter second number ::";
    cin >> y;

    sum = x + y;
    sub = x - y;
    mul = x * y;
    div = x / y;
    mod = x % y;

    cout << endl;
    cout << "Addition" << x << " + " << y << " = " << sum <<endl;
    cout << "Subtraction " << x << " - " << y << " = " << sub << endl;
    cout << "Multiplication" << x << " * " << y << " = " << mul << endl;
    cout << "Division" << x << " / " << y << " = " << div << endl;
    cout << "Modulus " << x << " % " << y << " = " << mod << endl;
    return 0;
}