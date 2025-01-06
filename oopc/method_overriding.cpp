#include<iostream>
using namespace std;

// method overloding
// same class multiple methods

// method overriding
// inheritance // parent and class have a same method

class Parent{

  public:
  void hello(){
    cout << "Parent Hello" << endl;
  }
};

class Child : public Parent{

  public:


  void hello()
  {
    // cout << "Child Hello" << endl;
    // reference variable is used to class parent class method // ::
    Parent::hello();
  }

};

int main(){

  Child c;
  c.hello();
  // Parent p;
  // p.hello();

  return 0;
}
