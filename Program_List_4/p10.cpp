/*#Write a C++ program to demonstrate use of Default Constructor? */
#include <iostream>
using namespace std;

class MyClass {
public:
    // Default Constructor
    MyClass() 
    {
        cout<<"Koradiya Khush"<< endl;
        cout<<"ER NO. 220130318018"<< endl;
        cout << "Default Constructor Called!" << endl;
    }
};

int main() {
    // Creating an object of MyClass
    MyClass obj;

    return 0;
}