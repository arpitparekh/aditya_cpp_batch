// this keyword in C++
// this keyword refers to the current object
#include<iostream>
using namespace std;

class Bomb{

  public:

  string ingredients;
  int time;

  Bomb(string ingredients,int time){
    this->ingredients = ingredients;
    this->time = time;
  }

  void display(){
    cout << ingredients << endl;
    cout << time << endl;
  }

};

int main(){

  Bomb b1("GunPowder",10);
  b1.display();

  return 0;
}
