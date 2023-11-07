/*#Write a c++ program of a circle and find its diameter, circumference and area?*/
#include <iostream>
using namespace std;
int main() 
{
    float radius, dia, cir, area;
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;

    cout << "Enter the radius of the circle::";
    cin >> radius;


    dia= 2 * radius;
    cir = 2 * 3.14 * radius;
    area= 3.14 * (radius * radius);

    cout << ""<<endl;
    cout << "Diameter      :: = " << dia<<endl;
    cout << "Circumference :: = " << cir <<endl;
    cout << "Area          :: = " << area <<endl;
    return 0;
}