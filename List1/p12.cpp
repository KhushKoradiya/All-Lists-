/*#Write c++ program to print Multiplication table of a number?*/
#include <iostream>

using namespace std;

int main() {
  
  int num,i;
  cout<<"Koradiya Khush"<< endl;
  cout<<"ER NO. 220130318018"<< endl;
  cout << "Enter the No :: ";
  cin >> num;

  for (i = 1; i <= 10; i++) 
  {
    cout << num <<" * "<< i <<" = "<< num * i << endl;
  }

  return 0;
}