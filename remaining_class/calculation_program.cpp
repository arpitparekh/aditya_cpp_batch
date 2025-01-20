#include <iostream>

using namespace std;

class Calculation{

  public:
    float area;
    float perimeter;

  void printData(){
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
  }

};

class Circle : public Calculation{

  public:
    float raidus;

  void areaOfCircle(){
    area = 3.14 * raidus * raidus;
  }

  void parimeterOfCircle(){
    perimeter = 2 * 3.14 * raidus;
  }

};

class Triangle : public Calculation{
  public:
    float side1;
    float side2;
    float side3;

  void areaOfCircle(){
    area = 0.5 * side1 * side2;
  }

  void parimeterOfCircle(){
    perimeter = side1 + side2 + side3;
  }
};

int main(){

  Circle c;
  c.raidus = 10;

  c.areaOfCircle();
  c.parimeterOfCircle();

  c.printData();

  Triangle t;
  t.side1 = 10;
  t.side2 = 13;
  t.side3 = 15;

  t.areaOfCircle();
  t.parimeterOfCircle();

  t.printData();

  return 0;
}
