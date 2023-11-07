/*#Write a c++ program to demonstratre use of constant arguments?*/
#include <iostream>
using namespace std;

// Function with constant arguments
int add(const int a, const int b) 
{
    // a and b are constant, so their values cannot be changed
    return a + b;
}

int main() 
{
    int k = 5;
    int p = 13;

    // Calling the function with constant arguments
    int sum = add(k, p);
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;
    cout << "The sum of " << k << " and " << p << " is: " << sum << endl;

    return 0;
}