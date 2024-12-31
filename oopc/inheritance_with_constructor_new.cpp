#include <iostream>
using namespace std;

class A{

  public:
  A(int x,int y){
    cout<<"A constructor "<< x << " " << y <<endl;
  }
};


class B : public A{
  public:
  B(int a) : A(12,13){
    cout<<"B constructor "<< a <<endl;
  }
};

int main(){

  // child class default or parameterized constructor always call parent class default constructor

  B b(44);
}


