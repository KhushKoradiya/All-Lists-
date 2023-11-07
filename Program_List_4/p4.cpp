/*#Write a C++ program to demonstrate use of passing object as an argument? */

//IMPORTANT

#include <iostream>
using namespace std;

class MyClass 
{
public:
    int x;
    MyClass(int val) : x(val) {}
};

void printObject(MyClass obj)
{
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;

    cout << "The value of x is :: " << obj.x << endl;
}

int main() {
    MyClass obj1(50);
    printObject(obj1);
    return 0;
}