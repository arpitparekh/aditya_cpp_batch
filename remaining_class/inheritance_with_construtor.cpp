#include<iostream>
using namespace std;

class Person{

  public:
  string name;
  int age;

  Person(string n,int a){
    name = n;
    age = a;
  }

};

class Student : public Person{

  public:
    int st_id;  // 12

    Student(int sid,string n,int a) : Person(n,a){   // passing values from child to parent
      st_id = sid;
    }

    void display()
    {
      cout << name << endl;
      cout << age << endl;
      cout << st_id << endl;
    }
};

int main(){

  // Person p("Sumit",23);
  // p.display();
  
  // oopc
  // inheritance
  // child class no default k parametrized constructor, always calls parent class default constrcutor

  Student s(12,"Pradip",55);
  s.display();

  return 0;
}
