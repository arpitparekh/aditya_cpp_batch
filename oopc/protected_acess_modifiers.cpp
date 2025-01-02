// protected access modifier
#include<iostream>
using namespace std;

class MaroClass{

  public:
    int a;
  private:
    int b;
  protected:   // current class and child class can access protected properties
    int c;
};

class TaroClass :public MaroClass{

  public:
    void display(){
      cout << a << endl;
      // cout << b << endl;    // not accessible
      cout << c << endl;
    }

};

int main(){

  MaroClass obj;
  obj.a=10;
  // obj.b = 30;    // not acessible
  // obj.c = 30;    // not acessible

  TaroClass obj2;
  obj2.display();

  return 0;
}
