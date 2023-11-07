/*#Write c++ program to find if a Character is Vowel or Consonant using function*/
#include<iostream>
using namespace std;

void vowelconsonant(char ch)
{
  if(ch=='a'|| ch == 'e'|| ch== 'i'|| ch== 'o'|| ch== 'u'
  || ch== 'A'|| ch == 'E'|| ch== 'I'|| ch== 'O'|| ch== 'U')
  {
    cout<<"Character is Vowel";
  }
  else
  {
    cout<<"Character is Consonant";
  }
}
int main()
{
  char ch;
  cout<<"Koradiya Khush"<< endl;
  cout<<"ER NO. 220130318018"<< endl;
  cout<<"Enter the Character::";
  cin>>ch;

  vowelconsonant(ch);
  return 0;
}
