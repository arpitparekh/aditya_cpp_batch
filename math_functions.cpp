#include <iostream>
#include<cmath>

using namespace std;

int main(){

  // math functions
  int a = 10;
  int b = 20;
  cout << max(a,b) << endl;
  cout << min(a,b) << endl;
  cout << abs(a-b) << endl;
  cout << pow(a,b) << endl;
  cout << sqrt(a) << endl;

  float f = 2.5456;
  cout << ceil(f) << endl;
  cout << floor(f) << endl;
  cout << round(f) << endl;

  cout << trunc(f) << endl;  // copy of floor
  cout << cbrt(a) << endl;  // cube root
  cout << hypot(a,b) << endl;  // hypotenuse
  cout << log(a) << endl;
  cout << log10(a) << endl;
  cout << sin(a) << endl;
  cout << cos(a) << endl;
  cout << tan(a) << endl;
  cout << asin(a) << endl;
  cout << acos(a) << endl;
  cout << atan(a) << endl;
  cout << atan2(a,b) << endl;
  cout << sinh(a) << endl;
  cout << cosh(a) << endl;
  cout << tanh(a) << endl;

  return 0;
}
