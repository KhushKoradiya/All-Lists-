/*#Write a c++ program to find simple intrest?*/
#include <iostream>

using namespace std;

int main() {
  float principal, rate, time, interest;
  cout<<"Koradiya Khush"<< endl;
  cout<<"ER NO. 220130318018"<< endl;
  cout << "Enter the principal amount: ";
  cin >> principal;

  cout << "Enter the rate of interest: ";
  cin >> rate;

  cout << "Enter the time period: ";
  cin >> time;

  interest = principal * rate * time / 100;
  cout << "The simple interest is: " << interest << endl;
  return 0;
}