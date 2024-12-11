#include<iostream>

using namespace std;

/*
The std namespace contains all the standard C++ library functions and objects. By using this directive, you're making your code more readable and saving yourself from typing std:: repeatedly.
*/

int main(){

  cout << "Hello world\n";  // :: scope resolution operator
  cout << "Goodbye world\n";

  int n;
  cin >> n;
  cout << n << endl ;

  cout << "Hi" << " Hello" << " Bye" << endl;

  int num = 12;

  cout << "Number is " << num << "\n";

  return 0;
  
}
