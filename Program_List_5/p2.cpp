/*#Write a C++ program to demonstrate use of Multilevel Inheritance?*/
#include <iostream>
using namespace std;

class Vehicle{
   public:
      void vehicle()
      {
         cout<<"I am a Vehicle"<< endl;
      }
};

class FourWheeler : public Vehicle{
   public:
      void fourWheeler()
      {
         cout<<"I have Fourwheels"<<endl;
      }
};

class Car : public FourWheeler{
   public:
      void car(){
         cout<<"I am a Car"<<endl;
      }
};
int main(){
   Car obj;
   obj.car();
   obj.fourWheeler();
   obj.vehicle();
   return 0;
}