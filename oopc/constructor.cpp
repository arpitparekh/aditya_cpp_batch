// class // class property(variable) // class method(function)
// constructor
// constructor is function that calls automatically when we create object of class
// constructor name is same as class name
// constructor does not have return type
// constructor can have parameters


#include<iostream>
using namespace std;

class A{

  public:

  A(){
    cout << "Constructor Called Class A" << endl;
  }

  string name;
  int age;

  void hi(){
    cout << "Hi" << endl;
  }

  void hello(){
    cout << "Hello " << name << endl;
  }

};

////////////////////////////////// for constrcutor  //////////////////////////////


class Computer{

  public:
  string brand;
  int price;

  Computer(){
    cout << "Constructor Called" << endl;
  }

  // ~Computer(){     // to release memory
  //   cout << "Destructor Called" << endl;
  // }

};

int main(){

  A a;
  a.hi();
  a.name = "Bascom";
  a.hello();

  Computer c;

  return 0;
}
