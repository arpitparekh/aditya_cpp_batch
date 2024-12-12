#include <iostream>
using namespace std;
int main(){

  // operators
  // arithmetic operators  //+ - / * %
  // relaational operators // < > <= >= == !=
  // logical operators // && || !
  // increment/decrement operators // ++ --
  // assignment operators // = += -= *= /= %=
  // bitwise operators // << >>
  // ternary operator
  // sizeof


  // bitwise operators
  // << >>
  int a = 10;  // 101.0

  cout << (a >> 1) << endl;  // shift binary right
  cout << (a << 1) << endl;  // shift binary left

  // ternary operator
  // ? ::
  int x = 10;
  int y = 20;
  int z = (x > y) ? x : y;
  cout << z << endl;

  return 0;
}
