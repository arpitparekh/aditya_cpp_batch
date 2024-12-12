#include<iostream>
#include<string>

using namespace std;

int main(){

  // string function
  string s1 = "hello";
  string s2 = "World";
  string s3 = s1 +" "+ s2;

  cout << s3 << endl;

  string s4 = s1.append(s2);
  cout << s4 << endl;

  int a = 12;
  string s5 = "value";

  string s6 =  to_string(a) +" "+ s5;
  cout << s6 << endl;

  cout << s6.length() << endl;

  string s7 = "Today's work is \"important\" ";
  cout << s7 << endl;

  string s8 = "C:\\Program Files\\Microsoft";
  cout << s8 << endl;

  // take string from user
  string s9;
  // cin >> s9;   // not take space and tab

  getline(cin,s9);  // take space and tab

  cout << s9 << endl;

  return 0;
}
