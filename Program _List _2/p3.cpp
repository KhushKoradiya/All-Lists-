/*#Write a program to define a function outside the class using scope resolution operator?*/
#include <iostream>
using namespace std;

class MyClass {
public:
    void office(); 
};
void MyClass::office() 
{ 
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;
    cout << "Jay Dwarkadhish " << endl;// Class method using scope resolution
}
int main() {
    MyClass obj;
    obj.office(); 
    return 0;
}
