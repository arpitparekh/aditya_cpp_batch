#include<iostream>

using namespace std;

int sum(int a,int b){
  return a + b;
}

int main(){

  // datatypes in cpp
  int a; // declaration
  a = 12; // initialization
  // int b = 13;
  cout << a << endl;
  cout << "size of int " << sizeof(a) << endl;
  float b;
  cout << "size of float " << sizeof(b) << endl;

  double dub;
  cout << "size of double " << sizeof(dub) << endl;

  char c;
  cout << "size of char " << sizeof(c) << endl;

  bool d;
  d = true;
  cout << "size of bool " << sizeof(d) << endl;

  cout << (12 < 3) << endl;

  // string
  string str;
  str = "hello"; // char[] name = "Bascom";
  string name  =  "Bascom";
  cout << str << endl;
  cout << name << endl;

  // string concatenation
  string firstName = "Bascom";
  string lastName = "Bridge";
  string fullName = firstName + " " + lastName;
  cout << fullName << endl;                            // Bascom Bridge

  cout << fullName.length() << endl;
  cout << fullName[0] << endl;
  cout << fullName.substr(0, 3) << endl;

  cout << fullName.find("com") << endl;

  string a1 = "Hi";
  string b1 = "hi";
  cout << (a1 == b1) << endl;
  cout << a1.compare(b1) << endl;

  // other string functions in cpp
  // https://www.cplusplus.com/reference/string/string/

  string c1;
  cin >> c1;

  string c2;
  // copy c1 to c2 usin copy function
  c2 = c1;

  // cout << c1.find_first_of(c1, 'a');

  cout << sum(1, 2) << endl;

  // oopc
  // object oriented programming concepts

  return 0;
}
