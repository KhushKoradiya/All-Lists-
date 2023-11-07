/*#Write a C++ program to create class Shape with public data member’s height & base. Member function are display_shape(). Call member function using object of the class. (* scope resolutionoperator method define outside the class)?*/
#include <iostream>
using namespace std;

class Shape {
public:
  int height;
  int base;
  void display_shape() 
  {
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;
    cout << "Height: " << height << endl;
    cout << "Base: " << base << endl;
  }
};

int main() 
{
  Shape s1;
  s1.height = 10;
  s1.base = 5;
  s1.display_shape();
  return 0;
}