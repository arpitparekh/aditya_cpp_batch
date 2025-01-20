#include<iostream>

using namespace std;

// heritance // varso
class Person{

  public:
  string name;
  float salary;

  void dancing(){
    cout << "Dancing" << endl;
  }


};

class Teacher : public Person{

  public:
  string subject;
  int id;

  void display()
  {
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;
    cout << "Subject: " << subject << endl;
    cout << "Id: " << id << endl;
  }
};

int main(){

  // when child class object access parent class method and property
  // it is called inheritance

  Teacher t;
  t.name = "Rahul";
  t.salary = 100000;
  t.subject = "Maths";
  t.id = 10;

  t.dancing();
  t.display();
  return 0;
}
