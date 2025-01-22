#include<iostream>
using namespace std;

class Comp{

  public:
    string name;
    double price;
    int quantity;

    Comp(string name, double price, int quantity)
    {
      this->name = name;
      this->price = price;
      this->quantity = quantity;
    }

    void dis(){
      cout << name << endl;
      cout << price << endl;
      cout << quantity << endl;
    }

};

int main(){

  // operator overloading
  // + - * / % ++ -- += -= *= /= %= == != > < >= <=

  Comp c1("CPU", 1000, 1);
  c1.dis();

  return 0;
}
