/*#Write a C++ program for setprecision() function?*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double num = 909192.93;

    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;
    cout << fixed << setprecision(2) << num << endl;
    cout << fixed << setprecision(4) << num << endl;
    cout << fixed << setprecision(6) << num << endl;
    cout << fixed << setprecision(8) << num << endl;

    return 0;
} 