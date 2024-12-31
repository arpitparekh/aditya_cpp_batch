#include<iostream>
using namespace std;

class ABC{


public:

int a;
  int b;
  int c;
  ABC(int a,int b,int c){
      this->a = a;
      this->b = b;
      this->c = c;
    }
};

class XYZ:public ABC{

public:

  int x;
  int y;
  int z;
  XYZ(int a,int b,int c,int x,int y,int z):ABC(a+10,b*10,c+20){
      this->x = x;
      this->y = y;
      this->z = z;
    }

    void display(){
      cout << a << " " << b << " " << c << endl;
      cout << x << " " << y << " " << z << endl;
    }
};

int main()
{

  XYZ xyz(1,2,3,4,5,6);
  xyz.display();

  return 0;
}
