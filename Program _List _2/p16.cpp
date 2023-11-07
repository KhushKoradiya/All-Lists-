/*#Write a c++ program to overload a function named is "area"?*/
#include <iostream>
using namespace std;

// Function to calculate the area of a square
int area(int side) {
    return side * side;
}

// Function to calculate the area of a rectangle
int area(int length, int breadth) {
    return length * breadth;
}

// Function to calculate the area of a circle
float area(float radius) {
    const float pi = 3.14;
    return pi * radius * radius;
}

int main() {
    int side, length, breadth;
    float radius ;
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;
    
    cout << "Enter the side of a square: ";
    cin >> side;
    cout << "Enter the length and breadth of a rectangle: ";
    cin >> length >> breadth;
    cout << "Enter the radius of a circle: ";
    cin >> radius;
   
    cout << "Area of the square is: " << area(side) << endl;
    cout << "Area of the rectangle is: " << area(length, breadth) << endl;
    cout << "Area of the circle is: " << area(radius) << endl;

    return 0;
}