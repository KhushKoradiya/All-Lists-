/*#Write a c++ program that declares student structure with data members name, std, percentage. Take value for these data members and display it?*/
#include <iostream>
using namespace std;
struct Student 
{
  string name;
  int std;
  float percentage;
};

int main() 
{
  Student s1;
  cout<<"Koradiya Khush"<< endl;
  cout<<"ER NO. 220130318018"<< endl;
  cout << "Enter name: ";
  cin >> s1.name;
  cout << "Enter std: ";
  cin >> s1.std;
  cout << "Enter percentage: ";
  cin >> s1.percentage;

  cout << "Student Details:" << endl;
  cout << "Name: " << s1.name << endl;
  cout << "Std: " << s1.std << endl;
  cout << "percentage: " << s1.percentage << endl;

  return 0;
}
