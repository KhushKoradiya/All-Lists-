/*#Write c++ program to find largest among 3 numbers?*/
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;
    cout << "Enter First numbers:: ";
    cin >> a; 
    cout << "Enter Second numbers:: ";
    cin >> b;
    cout << "Enter Third numbers:: ";
    cin >> c;

    if (a > b && a > c)
        cout << "The largest number is " << a;
    else if (b > a && b > c)
        cout << "The largest number is " << b;
    else
        cout << "The largest number is " << c;

    return 0;
}
