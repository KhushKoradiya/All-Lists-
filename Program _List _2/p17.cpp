/*#Write a c++ program to demonstrate use of Function Overloading?*/
#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

int main() 
{   
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;
    
    cout << "Sum of 10 and 20:: " << add(10, 20) << endl;
    cout << "Sum of 10, 20, and 30:: " << add(10, 20, 30) << endl;
    cout << "Sum of 5.5 and 3.5:: " << add(5.5, 3.5) << endl;

    return 0;
}