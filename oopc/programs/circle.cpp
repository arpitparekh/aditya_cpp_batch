#include<iostream>

using namespace std;

class Circle{
  public:
  double radius;

  void assignValues(double r){
    radius = r;
  }

  void findArea(){
    cout << "Area of Circle: " << 3.14 * radius * radius << endl;
  }

  void findCircumference(){
    cout << "Circumference of Circle: " << 2 * 3.14 * radius << endl;
  }

};

int main(){

  Circle c;
  c.assignValues(12.5);
  c.findArea();
  c.findCircumference();
}
