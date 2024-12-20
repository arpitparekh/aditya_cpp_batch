#include <iostream>
using namespace std;

int main(){

  // type casting
  // convert one datatype to another
  int a = 9999;
  cout << char(a) << endl;

  char ch = 'a';
  cout << int(ch) << endl;

  cout <<  float(a) << endl;

  cout << bool(a) << endl;

  string s = "123";
  int x = stoi(s);
  cout << x << endl;

  int data = 567;
  string s1 = to_string(data);   // any datatype to string
  cout << s1 << endl;

  float f = 12.34;
  cout << int(f) << endl;
  string s2 = to_string(f);
  cout << s2 << endl;

  string s3 = "1234.5656";
  float f2 = stof(s3);
  cout << f2 << endl;

}
