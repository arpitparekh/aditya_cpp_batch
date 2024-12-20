#include<iostream>
#include <string>

using namespace std;

int main(){

  int a = 10;
  int &b = a;   // reference variable

  cout << a << endl;
  cout << b << endl;

  b = 20;
  cout << a << endl;

}
