/*#Write C++ Program to Check Whether a Number is Prime or Not using function?*/
#include <iostream>  
using namespace std;  
int main()  
{  
  int n, i, m=0, temp=0;  
  cout<<"Koradiya Khush"<< endl;
  cout<<"ER NO. 220130318018"<< endl;
  cout << "Enter the No:: ";  
  cin >> n;  
  m=n/2;  
  for(i = 2; i <= m; i++)  
  {  
      if(n % i == 0)  
      {  
          cout << n << " is not a Prime number"<<endl;  
          temp=1; 
          break; 
      }  
  }  
  if (temp==0)  
      cout << n << " is Prime number"<<endl;  
  return 0;  
}  