#include<iostream>
using namespace std;

class Vehicle{
  public:
  void display(){
    cout << "Vehicle Parent" << endl;
  }
};

class Car : public Vehicle{
  public:

  void display(){
    Vehicle::display();   // :: reference operator
    cout << "Car Child" << endl;
  }

};

int main(){

  // method overloading
  // same class multiple method(parameter different)

  // method overriding (inheritance)
  // same method in parent and child class

  Car c;
  c.display();

  return 0;
}
