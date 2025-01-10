#include<iostream>
using namespace std;

// function templates

template <typename T,typename U>
void display(T a,U b)
{
  cout << a << endl;
  cout << b << endl;
}

// class templets
template <typename T,typename U,typename X>
class Student{

  public:
    T a;      // generalize property
    U u;
    X x;

    Student(T a,U u,X x){
      this->a = a;
      this->u = u;
      this->x = x;
    }

    void display(){
      cout << a << endl;
      cout << u << endl;
      cout << x << endl;
    }
};

int main(){

  // templets
  // we can create our own data types
  // we can creaate dynamic functions and dynamic class

  display(12<3,"Hello");

  Student s("Students",12,12.45);
  s.display();


  return 0;
}
