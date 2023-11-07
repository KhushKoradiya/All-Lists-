/*#Write a c++ program to create class distance with private data member's feet & inches. Member function are get_distance() & display_distance(). Call both member functions using object of the class? */
#include<iostream>
using namespace std;


class Distance
{
    private:
        int feet;
        int inches;

        public:
            void get_Distance()
            {
                cout<<"Koradiya Khush"<< endl;
                cout<<"ER NO. 220130318018"<< endl;
                cout<<"Enter Feet:: ";
                cin>> feet;
                cout<<"Enter Inches:: ";
                cin>> inches;            
            }

            void display_Distance()
            {
            cout<<"Feet:: "<< feet<< endl;
            cout<<"inches:: "<< inches<< endl;
            }
            
};

int main ()
{
        Distance d;
        d.get_Distance();
        d.display_Distance();

        return 0;
}