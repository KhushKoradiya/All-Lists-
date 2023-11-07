/*#Write a c++ program to find area of circle using formula pi*r2. Take the value of pi as default arguments in funtion?*/
#include <iostream>
using namespace std;

double areaOfCircle(double radius, double pi = 3.14) 
{
    return pi * radius * radius;
}

int main() 
{
    double radius;
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << areaOfCircle(radius) << endl;
    return 0;
}