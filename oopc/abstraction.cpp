//  abstraction in c++
// implmenetation of method in child class

#include<iostream>
using namespace std;

// abstract method (virtual function)

class Parent{
  public:
    int i = 0;

  void dance(){
    cout << "Parent is dancing" << endl;
  }

  virtual void sing(){
    cout << "Parent is singing" << endl;
  }

};

class Child : public Parent{
  public:
    void sing(){   // override
      Parent::sing();
    }
};

int main(){

  Child c;
  c.sing();

  return 0;
}
