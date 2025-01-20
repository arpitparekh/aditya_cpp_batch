#include<iostream>

using namespace std;

class Student{

  public:
  // collection of variables // properties
  // methods // functions
  string name;
  int roll;

  // constrcutor is a special functions that calls automatically when we create an object of a class
  // constructor can class name is same
  // does not have return type

  // Student(){  // default constrcutor
  //   cout << "Constructor called" << endl;
  // }

  Student(string n ,int r){  // paramererized constructor
    name = n;
    roll = r;
  }

  void display(){
    cout << "Name: " << name << endl;
    cout << "Roll: " << roll << endl;
  }

};

int main(){

  // cpp
  // variables
  // datatypes
  // operators
  // conditional statement // if else // else if
  // loops // loops inside loops // patterns
  // arrays
  // functions

  // oopcs

  Student s("Bascom",10);
  Student s1("Bridge",11);

  s.display();
  s1.display();

  return 0;
}
