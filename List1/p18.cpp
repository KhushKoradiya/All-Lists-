/*#Write C++ Program to Calculate the Power of a Number using function?*/
#include <iostream>
using namespace std;

int power(int x, int n)
{
    if (n == 0)
        return 1;
    else
        return x * power(x, n - 1);
}

int main()
{
    int x, n;
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;
    cout << "Enter the base number: ";
    cin >> x;
    cout << "Enter the exponent: ";
    cin >> n;
    cout << "The power of " << x << " raised to " << n << " is " << power(x, n);
    return 0;
}