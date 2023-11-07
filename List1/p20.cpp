/*#Write C++ program to find factorial of the given number with the use of function?*/
#include <iostream>
using namespace std;

int factorial(int n) 
{
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}
int main() 
{
  int n;
  cout<<"Koradiya Khush"<< endl;
  cout<<"ER NO. 220130318018"<< endl;
  cout << "Enter a number:: ";
  cin >> n;
  int result = factorial(n);

  cout << "The factorial of " << n << " is " << result << endl;

  return 0;
}