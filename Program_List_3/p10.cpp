/*#Write a C++ program using class to find maximum number from three numbers?*/
#include <iostream>
using namespace std;

class MaximumFinder 
{
public:
  int findMaximum(int a, int b, int c) 
  {
    int max = a;
    if (b > max) {
      max = b;
    }
    if (c > max) {
      max = c;
    }
    return max;
  }
};

int main() 
{
  MaximumFinder mf;
  int a, b, c;
  cout<<"Koradiya Khush"<< endl;
  cout<<"ER NO. 220130318018"<< endl;
  cout << "Enter three numbers: ";
  cin >> a >> b >> c;
  int max = mf.findMaximum(a, b, c);
  cout << "The maximum number is: " << max << endl;
  return 0;
}