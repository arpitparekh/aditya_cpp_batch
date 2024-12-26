// Constructor uses
// constrcutor is used to initialize properties of class

#include <iostream>
using namespace std;

class Person{

  public:

  string name;
  int age;


  Person(string n,int a){   // parameterized constructor
    name = n;
    age = a;
  }

  void display(){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
  }


};

int main(){

  Person p1("Bascom",23);
  // Person p1 = Person("Bascom",23);
  p1.display();

  return 0;
}
