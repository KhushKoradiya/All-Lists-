/*#write a c++ program to access static variable using scope resolution operator with using class?*/
#include<iostream>
using namespace std;
class small
{
    public:
        static int x;
        void display()
        {
            cout<<"Koradiya Khush"<< endl;
            cout<<"ER NO. 220130318018"<< endl;
            cout<<"Value of X is :: "<<x<<endl;
        }
};
int small ::x=55;
int main()
{
    small s1;
    s1.display();
    return 0;
}