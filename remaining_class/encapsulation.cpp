#include<iostream>

using namespace std;

class A{

  private:
  int a;  // private

  // void myMethod(){
  //   cout << "Hello" << endl;
  // }

  public:
    int b;

  protected:
    int c;
    void myMethod()
    {
      cout << "Hello" << endl;
    }
};

class B : public A{
  void hello(){
    cout << b << endl;
    cout << c << endl;
    A ::myMethod();
  }
};

int main()
{

  // encapsulation
  // to achive encapsulation we use access modifers
  // public, private, protected

  A obj;
  obj.b;


  // constructor
  // inehritance
  // inheritance with constructor (constructor chaining)
  // polimorphism
  // encapsulation

  return 0;
}
