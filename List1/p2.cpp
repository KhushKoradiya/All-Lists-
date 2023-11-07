/*#Write a c++ program to convert Fahrenheit into Celsius using class?*/
#include<iostream>
using namespace std;

class Temperature
{
   
	public:
	float  fahren, celsius, conversion(float f)
	{
		fahren=f;
		celsius=(fahren-32)* 5.0/9.0;
		return celsius;
	}
};
int main()
{
	Temperature t;
	float f;
	cout<<"Koradiya Khush"<< endl;
  	cout<<"ER NO. 220130318018"<< endl;
	cout<<"Enter Temperature in Fahrenheit:: ";
	cin>>f;
	// call conversion function with object t
	cout<<"Temperature in Celsius:: "<<t.conversion(f);

return 0;
}
            