#include<iostream>
using namespace std;

class Student{
  // properties and functions
  public:
  string name;
  int roll_no;

  void assignValues(string n,int r){

    // parameter value => assigning to propery value

    name = n;
    roll_no = r;
  }

  void printValues(){
    cout<< name << " " << roll_no << endl;
  }

};

int main()
{
  Student s1;

  s1.assignValues("Bascom",12);
  s1.printValues();

  Student s2;
  s2.assignValues("Bridge",13);
  s2.printValues();

  return 0;
}
