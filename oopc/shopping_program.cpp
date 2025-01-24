/*
Online Shopping System
Classes:** Product, Customer, Order, ShoppingCart
- *Attributes:* ProductID, Price, CustomerName, OrderID
- *Methods:* AddToCart(), RemoveFromCart(), PlaceOrder(), TrackOrder()

*/
#include<iostream>
using namespace std;


class Product{
  public:
  int products[100];
  float price[100]
  Product(int products[100], float price)
  {
    for (int i = 0; i < 100; i++) {
      this->products[i] = products[i];
    }
    this->price = price;
  }
};
class Customer : public Product{
  public:
  string CustomerName;
  Customer(string CustomerName, int ProductID, float price): Product(ProductID, price)
  {
    this->CustomerName = CustomerName;
  }

  void PlaceOrder(){

  }
  void TrackOrder(){

  }
};
class Order : public Customer{
  public:
  int OrderID;
  Order(int OrderID, string CustomerName, int ProductID, float price) : Customer(CustomerName, ProductID, price)
  {
    this->OrderID = OrderID;
  }
};
class ShoppingCart : public Order{

  public:
    ShoppingCart(int OrderID, string CustomerName, int ProductID, float price) : Order(OrderID, CustomerName, ProductID, price){}

    void AddToCart(string ProductName,int price)
    {

    }
  void RemoveFromCart(){

  }
};

int main(){
  // product array
  // prize array
  ShoppingCart cart;
  return 0;
}
