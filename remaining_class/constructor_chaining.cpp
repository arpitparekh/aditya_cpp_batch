#include<iostream>
using namespace std;

class A{
  public:
  A(int a){
    cout << "Class A Constructor" << endl;
    cout << a << endl;
  }
};

class B : public A{

  public:
  B() : A(12){
    cout << "Class B Constructor" << endl;
  }
};

int main(){

  B b;
  return 0;
}
