/*#write a c++ program to create class student with data members name & age. Member function are get_details()and diaplay_details().Call both member functions using object of the class?*/
#include <iostream>
using namespace std;

class Student 
{
    private:
        string name;
        int age;

    public:
        void get_details() 
        {
            cout<<"Koradiya Khush"<< endl;
            cout<<"ER NO. 220130318018"<< endl;
            cout << "Enter name: ";
            getline(cin, name);
            cout << "Enter age: ";
            cin >> age;
        }

        void display_details() 
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main() {
    Student s;
    s.get_details();
    s.display_details();

    return 0;
}