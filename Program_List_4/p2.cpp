/*#Write a c++ program to demostrate use of ststic Member function?*/
#include <iostream>
using namespace std;

class test 
{
public:
  static void print() 
  {
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;
    cout << "This is a static member function" << endl;
  }
};

int main() {
  test::print();  // Calling static member function without creating object
  return 0;
}