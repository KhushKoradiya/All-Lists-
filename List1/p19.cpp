/*#Write C++ Program to Make a Simple Calculator with the use of switch case?*/
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, choice;

    
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;
    cout << "Enter First number:: ";

    cin >> num1;
    cout << "Enter Second number:: ";
    cin >> num2;

    cout << "Select operation:"<<endl;
    cout << "1. Addition"<<endl;
    cout << "2. Subtraction"<<endl;
    cout << "3. Multiplication"<<endl;
    cout << "4. Division"<<endl;
    cout << "Enter your choice:: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << num1 + num2 << endl;
        break;
    case 2:
        cout << num1 - num2 << endl;
        break;
    case 3:
        cout << num1 * num2 << endl;
        break;
    case 4:
        cout << num1 / num2 << endl;
        break;
    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}