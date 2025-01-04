# include<iostream>
using namespace std;

class MaroClass{

  public:
  void hello(int num,string name){
    cout << "Fucntion 1" << endl;
  }

  void hello(string name,int num)
  {
    cout << "Function 2" << endl;
  }


  void hello(){

  }

  void hello(string name){

  }

  void hello(int num){

  }
};

int main(){

  // polimorphism
  // poli(many)
  // morphism(form)
  // morphism is the ability of an object to take on many forms
  // method overaloding


  // method overriding(inheritance)  // pending
  // operator overloading  // pending

  // method overloading (many form of funtions)(single class)
  // no parameter must be different
  // type of parameter must be different
  // order of parameter must be different

  MaroClass mc;
  mc.hello(12, "Hello");
  mc.hello("Hello", 12);

  return 0;
}
