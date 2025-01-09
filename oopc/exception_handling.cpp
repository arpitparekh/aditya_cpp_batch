#include <iostream>
using namespace std;

int main()
{

  try
  {

    int a = 10;
    if (a <= 10)
    {
      throw 10; //  hate raine error thorw karo
    }
    else
    {
      cout << "a is greater than or equal to 10" << endl;
    }
  }

  catch (...)
  {
    cout << "Error avi" << endl;
  }

  cout << "Hello World" << endl;

  string path = "C:\\sumit\\Desktop\\test.txt";

  return 0;
}
