/*#Write a C++ program for endl and setw function?*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
    int num = 99;
    double dbl = 3.14;
    string str = "MAHADEV HAR";

    cout << "Number: " << setw(5) << num << endl;
    cout << "Double: " << setw(9) << dbl << endl;
    cout << "String: " << setw(20) << str << endl;

    return 0;
}
