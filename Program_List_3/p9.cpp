/*#Write a C++ program to create class Max with data member’s num_1 and num_2. Member function are input(), display(), largest().(* Nesting of member functions: A member function can be called by using its name inside another member function of the same class. This is known as nesting of member function.?)*/
#include <iostream>
using namespace std;

class Max 
{
private:
  int num_1;
  int num_2;

public:
  void input() 
  {
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;
    cout << "Enter two numbers: ";
    cin >> num_1 >> num_2;
  }

  void display() 
  {
    cout << "The two numbers are: " << num_1 << " and " << num_2 << endl;
  }

  void largest() {
    if (num_1 > num_2) {
      cout << "The largest number is: " << num_1 << endl;
    } else {
      cout << "The largest number is: " << num_2 << endl;
    }
  }
};

int main() {
  Max obj;
  obj.input();
  obj.display();
  obj.largest();

  return 0;
}