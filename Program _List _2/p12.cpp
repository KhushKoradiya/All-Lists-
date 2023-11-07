/*#write a c++ program to demonstrate use of default arguments?*/
#include<iostream>
using namespace std;

// A function with default arguments called wth
// 2 arguments or 3 arguments or 4 arguments.
int sum(int x, int y, int z = 0, int w = 0) //assigning default values to z,w as 0
{
	return (x + y + z + w);
}

int main()
{
	cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;

	cout << sum(5, 10) << endl;	
	cout << sum(15, 20, 25) << endl;
	cout << sum(30, 35, 40, 45) << endl;
    
	return 0;
}