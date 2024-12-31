#include<iostream>
using namespace std;

class Parent{

  public:
    string name;
    int age;

    Parent(string name, int age){
      this->name = name;
      this->age = age;
    }
};

class Child: public Parent{

  public:
    string toyName;

    Child(string toyName): Parent("Parent", 10){
      this->toyName = toyName;
    }

    void display(){
      cout << "Name: " << name << endl;
      cout << "Age: " << age << endl;
      cout << "Toy Name: " << toyName << endl;
    }

};

int main()
{

  Child c("Ball");
  c.display();

  // child class default or parameterized constructor always call parent class default constructor

  return 0;
}
