#include<iostream>
using namespace std;


class  A
{

// method overloading

public:
  void display(){
    cout << "A" << endl;
  }

  void display(int a){
    cout << "A new" << endl;
  }

  void display(float b)
  {
    cout << "A new new" << endl;
  }

  void display(string a, int b)
  {
    cout << "A new new new" << endl;
    cout << a << endl;
    cout << b << endl;
  }

  void display(int b, string a)
  {
    cout << "A new new new" << endl;
    cout << a << endl;
    cout << b << endl;
  }
};

int main(){

  // polymorphism
  // poly = may
  // morphism = forms

  // method overloading //
  // -----------------------------------
  // operator overloading
  // meothd overriding

  A a;
  a.display(12);
  a.display("Hello",12);
  a.display(12, "Hello");

  return 0;

}
