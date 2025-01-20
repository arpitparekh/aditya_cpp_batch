#include<iostream>

using namespace std;

// single inheritance
class A{
};
class B : public A
{
};

// heirarchical inheritance

class P{

};
class Q:public P{

};
class R:public P{
};

// multi level inheritance
class F{

};
class G : public F{
};
class H : public G{
};

// multiple inheritance
class X{

};
class Y{

};
class Z : public X,public Y{

};

int main()
{
  
  return 0;
}
