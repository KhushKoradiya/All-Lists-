/*#Write a c++ program to calculate cube of given number using inline function?*/
#include <iostream>

using namespace std;

inline int cube(int n) {
  return n * n * n;
}

int main() {
  int n;
  cout<<"Koradiya Khush"<< endl;
  cout<<"ER NO. 220130318018"<< endl;
  cout << "Enter a number: ";
  cin >> n;
  cout << "The cube of " << n << " is " << cube(n) << endl;
  return 0;
}