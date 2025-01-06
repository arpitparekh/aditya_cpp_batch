#include<iostream>
using namespace std;

class MaroClass{

  public:
  int a;
  int b;

  MaroClass(int a,int b){
    this->a = a;
    this->b = b;
  }

  void operator == (MaroClass &obj){
    cout << "Sum is " << a + obj.a << endl;
    cout << "Sum is " << b + obj.b << endl;
  }
};

int main(){

  // operator overloading
  // happen only between 2 objects
  // +
  MaroClass m1(1, 2);
  MaroClass m2(3, 4);

  m1 == m2;  // operator overloading  == operator

  // m1.operator+(m2);

  return 0;
}
