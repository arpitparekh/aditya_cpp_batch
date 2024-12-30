#include<iostream>
using namespace std;

class Animal{
  public:
  string name;
  int age;
  string sound;

  void display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Sound: "<<sound<<endl;
  }

  void assignValues(string n,int a,string s){
    name = n;
    age = a;
    sound = s;
  }

};

class Dog: public Animal{
  public:
    string breed;
};
class Cat : public Animal
{
};

int
main()
{

  Dog d1;
  d1.assignValues("Dog",10,"Bark");
  d1.display();
  d1.breed = "Golden Retriever";

  Cat c1;
  c1.assignValues("Cat",5,"Meow");
  c1.display();


  /*

// Question 1: Animal System
/*
Create a simple animal classification system:
1. Make a base class 'Animal' with:
- name
- age
- sound they make
2. Create two derived classes: 'Dog' and 'Cat'
3. Add appropriate methods to make them:
- Make their specific sounds
- Display their information

*/

  return 0;
}
