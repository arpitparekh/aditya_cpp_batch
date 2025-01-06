// types of inheritance
// 1. single inheritance
#include <iostream>
using namespace std;

///////////////////////// single level  ///////////////////////////////////////////////
class A
{
};

class B : public A
{
};

// 2. multilevel inheritance  /////////////////////////////////////////////////

class A1
{

private:
  string name;

public:
  A1(string name)
  {
    this->name = name;
  }

  string getName()
  {
    return name;
  }
};

class A2 : public A1
{

private:
  string address;

public:
  A2(string name, string address) : A1(name)
  {
    this->address = address;
  }

  string getAddress()
  {
    return address;
  }
};

class A3 : public A2
{
private:
  int pincode;

public:
  A3(string name, string address, int pincode) : A2(name, address)
  {
    this->pincode = pincode;
  }
  int getPincode()
  {
    return pincode;
  }
};

// heirarchical inheritance  //////////////////////////////////////////////////////////////
// one parent // multiple child

class P
{
private:
  string name;

public:
  P(string name)
  {
    this->name = name;
  }
};

class C1 : public P
{
};

class C2 : public P
{
};

//////////////////////////////////////////////////////////////////////////

// multiple inheritance
// mutiple parent single child

class X1{

  public:
  int a;

  X1(int a){
    this->a = a;
  }

  void hello(){
    cout << " X1 Hello" << endl;
  }
};

class X2{
  public:
  int b;

  X2(int b){
    this->b = b;
  }

  void hello(){
    cout << " X2 Hello"<< endl;
  }

};

class  Y : public X1,X2{

  public:
  int c;

  Y(int a,int b,int c): X1(a),X2(b){
    this->c = c;
  }

  void display(){
    cout << "A is : "<< a<<endl;
    cout << "B is : "<< b<<endl;
    cout << "C is : "<< c<<endl;

  }

};

////////////////////////////////////////////////////////////////////////////

int main()
{

  A3 a3("sagar", "pune", 411014);
  cout << a3.getName() << endl;
  cout << a3.getAddress() << endl;
  cout << a3.getPincode() << endl;


  // multiple inheritance
  Y y(10,20,30);
  y.display();
  // y.hello(); // "Y::hello" is ambiguousC/C++(266)  // problem

  string diamond_problem = "https://www.geeksforgeeks.org/diamond-problem-in-cpp/";

  return 0;
}
