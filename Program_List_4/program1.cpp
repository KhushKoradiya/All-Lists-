/*#Write a c++ program thtat create a class 'Employee' that has data members emp_id & emp_name and member function are grtdata()[to input data] & putdata()[to output]. Write a main function to create emp, an array of employee objects. Accept and display the details of at least 10 employees?*/
#include <iostream>
using namespace std;

class Employee
{
private:
    int emp_id;
    string emp_name;

public:
    void getdata()
    {
        cout << "Enter employee ID: ";
        cin >> emp_id;
        cout << "Enter employee name: ";
        cin >> emp_name;
    }

    void putdata()
    {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Employee name: " << emp_name << endl;
    }
};

int main()
{
    int n;
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;
    cout << "Enter the number of employees: ";
    cin >> n;

    Employee emp[n];

    for (int i = 0; i < n; i++)
    {
        emp[i].getdata();
    }

    cout << "Employee details:" << endl;
    for (int i = 0; i < n; i++)
    {
        emp[i].putdata();
    }

    return 0;
}
