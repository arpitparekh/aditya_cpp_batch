// access modifer with inheritance in C++
// access modifiers with inheritance

#include <iostream>
using namespace std;

class A{

  public:
    int a;

  private:
    int b;

  protected:
  int c;
};

class B : public A{   // inheriting A class publically

  public:
  void display(){
    cout << a << endl;
    // cout << b << endl;
    cout << c << endl;
  }

};


class C : public A{  // inheriting A class privateally

  void display(){
    cout << a << endl;
    // cout << b << endl;
    cout << c << endl;
  }

};

class D : public C{
  public:
  void display(){
    cout << a << endl;  // not accessible because of c is taking a privatly inherited class
    // cout << b << endl;
    cout << c << endl;  // // not accessible because of c is taking a privatly inherited class
  }
};

int main(){



  return 0;
}
