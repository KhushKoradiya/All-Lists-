/*#Write C++ Program to For fibonacci Number using function?*/
#include <iostream>
using namespace std;
int f(int n);
int main()
{
int n, i = 0;
  	cout<<"Koradiya Khush"<< endl;
  	cout<<"ER NO. 220130318018"<< endl;
	cout << "Enter the Number of terms :: ";
	cin >> n;

	while (i < n)
	{
		cout << " " << f(i);
		i++;
	}
	return 0;
}

int f(int n)
{
	if ((n == 1) || (n == 0))
	{
		return (n);
	}
	else
	{
		return (f(n - 1) + f(n - 2));
	}
}