// friend function is used to access private members of a class from outside the class.
// it is a special member function that is not a member function of the class.

#include <iostream>
using namespace std;

class Student{

  private:
    int age;
    string name;
    
    friend void getAcess(Student &obj);   // create friend function to access private members
};

void getAcess(Student &obj){
  obj.age = 20;
  obj.name = "John";
  cout << obj.age << " " << obj.name << endl;
}

int main(){
  Student s;
  getAcess(s);

  return 0;

  // class
  // object
  // constructor
  // inheritance
  // encapsulation (acess modifiers)
  // polymorphism // mothod overloading // methodo overriding // operator overloading
  // abstraction // friend function

  // file handling
  // exception handling
  // dynamic memory allocation // new // delete
  // templates // generic programming

}
