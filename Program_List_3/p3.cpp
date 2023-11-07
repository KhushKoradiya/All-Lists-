/*#Write a C++ program to declare structure of Employee with data members like emp_name, emp_code, emp_salary, emp_branch and also display
contents/values of member variables?*/
#include <iostream>
using namespace std;

struct Employee 
{
  string emp_name;
  int emp_code;
  float emp_salary;
  string emp_branch;
};

int main() 
{
  Employee emp1;
  cout<<"Koradiya Khush"<< endl;
  cout<<"ER NO. 220130318018"<< endl;
  cout << "Enter employee name: ";
  cin >> emp1.emp_name;
  cout << "Enter employee code: ";
  cin >> emp1.emp_code;
  cout << "Enter employee salary: ";
  cin >> emp1.emp_salary;
  cout << "Enter employee branch: ";
  cin >> emp1.emp_branch;

  cout << "\nEmployee Details:" << endl;
  cout << "Employee Name: " << emp1.emp_name << endl;
  cout << "Employee Code: " << emp1.emp_code << endl;
  cout << "Employee Salary: " << emp1.emp_salary << endl;
  cout << "Employee Branch: " << emp1.emp_branch << endl;

  return 0;
}