// access modifiers in C++
// access modifiers without inheritance
// there are three access modifiers in C++: public, private, and protected.

class Person{

  // by default all the members of a class are private.
  // private: only accessible within the class
  // public: accessible from anywhere

  public:
  int age;
  string name;
  float height;

  private:


  void display(){
    cout << "Age: " << age << endl;
    cout << "Name: " << name << endl;
    cout << "Height: " << height << endl;
  }

}

#include <iostream>
using namespace std;

int main(){

  // public
  // private
  // protected

  Person p;
  p.age = 20;
  p.name = "John";
  p.height = 1.75;
  // p.display();

  return 0;
}
