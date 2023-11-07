/*# Write a C++ program to demonstrate use of class account member is acc_no, balance, branch_code. (*Declare variable in public sectionand initialize the value with object name and display outside the class)?*/
#include <iostream>
using namespace std;

class Account 
{
public:
  int acc_no;
  float balance;
  int branch_code;
};

int main() 
{
  Account acc1;
  acc1.acc_no = 123456;
  acc1.balance = 10000;
  acc1.branch_code = 5255457;

    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;
    cout << "Account Number: " << acc1.acc_no << endl;
    cout << "Balance: " << acc1.balance << endl;
    cout << "Branch Code: " << acc1.branch_code << endl;

  return 0;
}