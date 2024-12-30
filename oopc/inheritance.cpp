// inheritance
// varso
// using inheritance one class can use other class property and methods into it

#include<iostream>
using namespace std;

class Person{  // base class // parent class
  public:
    string name;
    int age;
    double height;
    double weight;


    void displayValues(){
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
    cout << "Weigth : " << weight << endl;
    cout << "Height : " << height << endl;
  }
};

class Student : public Person{   // extending a student class with person class

// derived class // child class

  public:

  void assignValues(string name,int age,double weight,double height){
    this->name = name;
    this->age = age;
    this-> weight = weight;
    this->height = height;

  }


};

int main(){

  Student s1;
  s1.assignValues("Bascom",12,80,80);
  s1.displayValues();

  return 0;
}
