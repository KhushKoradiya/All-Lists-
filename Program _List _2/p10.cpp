/*#Write a c++ program to demostrate use of call of reference?*/
#include<iostream>
using namespace std;

// Function to swap the values of two numbers
void swap(int &a, int &b) 
{
    int temp = a;
    a = b;
    b = temp;
}

int main() 
{
    int num1 = 50, num2 = 100;
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;
    cout << "Before swapping, number 1 is " << num1 << " and number 2 is " << num2 << endl;
 
    // Call the swap function with call by reference
    swap(num1, num2);

    cout << "After swapping, number 1 is " << num1 << " and number 2 is " << num2 << endl;

    return 0;
}