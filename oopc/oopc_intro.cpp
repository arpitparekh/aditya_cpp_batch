// object oriented programming in c++

#include <iostream>
using namespace std;

class Student{

  public:
  string name = "";  // default value   # data members
  int age = 0;

  void display(){                             // member function
    printf("This is a student class");
  }
};

int main(){

  Student s1;  // object is a instance of class
  s1.display();

  cout<<s1.name<<endl;
  cout<<s1.age<<endl;

  Student s2;

  return 0;
}
