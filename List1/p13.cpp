/*#Write c++ program to calculate sum of first n Natural No. using Function?*/
  #include <iostream>
using namespace std;

int sumN(int n) 
{
  int sum = 0;
  for (int i = 1; i <= n; i++) 
  {
    sum += i;
  }
  return sum;
}

int main() 
{

  int n;
  cout<<"Koradiya Khush"<< endl;
  cout<<"ER NO. 220130318018"<< endl;
  cout << "Enter a number: ";
  cin >> n;

  int sum = sumN(n);
  cout << "The sum of the first "<<n<< endl;
  cout<<"Natural numbers is " << sum;

  return 0;
}