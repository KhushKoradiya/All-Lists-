/*#Write a c++ program to demostrate use of return by reference?*/
#include <iostream> 
using namespace std; 

// Global variable 
int x; 

// Function returns as a return 
// by reference 
int& returnbyreference() 
{ 
	return x; 
} 

// Driver Code 
int main() 
{ 
	// Function Call for return 
	// by reference 
	returnbyreference() = 55; 

	// Print X 
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;
	cout << x; 
	return 0; 
} 
