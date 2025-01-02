#include<iostream>
using namespace std;

class Data{
  private:
  int a;
  int b;


  public:

    Data(int a,int b){
    this->a=a;
    this->b=b;
  }


  void display(){
    cout<<a<<" "<<b<<endl;
  }
};

int main(){

  Data d(10,20);
  d.display();


  return 0;
};
