/*#Write a c++ program to enter length and bredth of a rectangle and find its perimeter and area?*/
#include <iostream>
using namespace std;

int main() 
{
  int length, breadth;

  cout<<"Koradiya Khush"<< endl;
  cout<<"ER NO. 220130318018"<< endl;
  cout << "Enter the length of the rectangle: ";
  cin >> length;

  cout << "Enter the breadth of the rectangle: ";
  cin >> breadth;

  int perimeter = 2 * (length + breadth);
  int area = length * breadth;

  cout << "The perimeter of the rectangle is " << perimeter << endl;
  cout << "The area of the rectangle is " << area << endl;
  return 0;

}