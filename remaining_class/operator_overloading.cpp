#include<iostream>
using namespace std;

class Bag{

  public:
  int price;
  int quantity;

  Bag(int price, int quantity){
    this->price = price;
    this->quantity = quantity;
  }

  void operator<<(Bag &b){

    this->price = this->price + b.price;
    this->quantity = this->quantity + b.quantity;

    cout << "Sum of Price: " << this->price << endl;
    cout << "Sum of Quantity: " << this->quantity << endl;
  }

  void display(){
    cout << "Price: " << price << endl;
    cout << "Quantity: " << quantity << endl;
  }

};

int main(){

  // operator overloading

  // + (sum)
  // obj + obj

  Bag b(100, 10);
  Bag b2(200, 20);

  b << b2;
  // b.operator+(b2); 
  return 0;
}
