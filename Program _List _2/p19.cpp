/*#Write a C++ program to add two integer values using call by reference?*/
#include <iostream>

using namespace std;

void add_by_reference(int &a, int &b) {
  a += b;
}

int main() {
  int k = 10;
  int n = 20;

  add_by_reference(k, n);
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;  
    cout << "The sum of K and N is " << k << endl;

  return 0;
}