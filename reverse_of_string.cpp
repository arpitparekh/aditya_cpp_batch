#include<iostream>

using namespace std;

int main(){

  string name = "bascom bridge";
  string copy = "";

  for (int i = name.length()-1; i >=0; i--)
  {
    copy = copy + name[i];
  }
  cout << copy << endl;

  return 0;
}
