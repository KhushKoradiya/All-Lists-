/*#Write a C++ program to demonstrate use of Returning Object as argument?*/
#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass(int val) : value(val) {}

    void printValue() {
        cout << "Value: " << value << endl;
    }

    MyClass add(const MyClass& other) {
        return MyClass(this->value + other.value);
    }

private:
    int value;
};
int main() {
    MyClass obj1(42);
    MyClass obj2(18);
    
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;
    cout << "Object 1:" << endl;
    obj1.printValue();

    cout << "Object 2:" << endl;
    obj2.printValue();

    // Call the add function to return a new object and store it in obj3
    MyClass obj3 = obj1.add(obj2);

    cout << "After adding Object 1 and Object 2:" << endl;
    obj3.printValue();

    return 0;
}
