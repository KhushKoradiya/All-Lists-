/*#Write a C++ program to demonstrate use of Single Inheritance?*/
#include<iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() 
    {
        cout<<"Koradiya Khush"<< endl;
        cout<<"ER NO. 220130318018"<< endl;
        cout << "Eating" << endl;
    }

    void sleep() {
        cout << "Sleeping" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
       cout << "Barking" << endl;
    }
};

int main() {
    Dog dog;

    // Accessing methods of the base class
    dog.eat();
    dog.sleep();

    // Accessing method of the derived class
    dog.bark();

    return 0;
}
