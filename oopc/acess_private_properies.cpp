// to access private properties of a class in C++ we can use public methods of the class.

#include<iostream>
using namespace std;

class Number{

  private:
  int a;
  int b;
  int c;

  public: // getter setter functions for private properties

  void setA(int a){
    this->a = a;
  }
  int getA(){
    return this->a;
  }

  void setB(int b){
    this->b = b;
  }
  int getB(){
    return this->b;
  }

  void setC(int c){
    this->c = c;
  }
  int getC(){
    return this->c;
  }

};

int main(){

  Number num;
  num.setA(10);
  num.setB(20);
  num.setC(30);

  cout << "A: " << num.getA() << endl;
  cout << "B: " << num.getB() << endl;
  cout << "C: " << num.getC() << endl;

}
