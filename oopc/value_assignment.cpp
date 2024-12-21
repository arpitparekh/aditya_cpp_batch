#include <iostream>
using namespace std;

class Institution {

  public:
  // property // function
  int age = 0;  // class member variable
  string name = "";
  string address = "";

  void display(){  // class memeber function
    cout << "This is a class" << endl;
  }

  void assignValue(int a,string n,string add){
    age = a;
    name = n;
    address = add;
  }

  void printValues(){
    cout << "Age: " << age << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
  }

};

int main(){

  // class is blueprint
  Institution obj1;
  cout << obj1.age << endl;
  cout << obj1.name << endl;
  cout << obj1.address << endl;
  obj1.age = 12;
  obj1.name = "Bascom";
  obj1.address = "Pune";
  cout << obj1.age << endl;
  cout << obj1.name << endl;
  cout << obj1.address << endl;

  // this is not a proper way to intialize varialble in class
  // there are different way to intialize class variable
  // using  a fucntion

  Institution obj2;
  obj2.assignValue(12,"Tops Technology","Ahmedabad");
  obj2.printValues();

  Institution obj3;
  obj3.assignValue(13,"Red and White","Cg Road");
  obj3.printValues();

  return 0;
  
}
