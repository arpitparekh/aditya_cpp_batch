#include<iostream>
using namespace std;

class X{

  public:
  X(int a,int b,int c)
  { // 13 // 14 // 50
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
  }
};

class Y : public X{
  public:
  Y(int p,int q,int r,int s) : X(q+10,r,s*10){  // 2 // 13 // 14 // 50
    cout << p << endl;  // 2
  }

};
class Z : public Y
{

  public:
  Z(int h,int i,int j,int k ,int l) : Y(i,j,k+10,l){
    cout << h << endl;  // 1
  }

};


int main(){

  Z z(1,2,3,4,5);

  return 0;
}
