/*#Write a C++ program to demonstrate use of Friend Class?*/
#include <iostream>
using namespace std;

class ClassB;

class ClassA {
    private:
        int numA;

        // friend class declaration
        friend class ClassB;

    public:
        // constructor to initialize numA to 12
        ClassA() : numA(16) {}
};
class ClassB {
    private:
        int numB;

    public:
        // constructor to initialize numB to 1
        ClassB() : numB(2) {}
    
    // member function to add numA
    int add() {
        ClassA objectA;
        return objectA.numA + numB;
    }
};
int main() {
    ClassB objectB;
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;
    cout << "Sum is :: " << objectB.add();
    return 0;
}