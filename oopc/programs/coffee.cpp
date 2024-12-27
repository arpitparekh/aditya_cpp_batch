/*
Design a class Coffee with attributes for size (small/medium/large) and temperature. Write a constructor that validates temperature cannot be above 90°C. Add a member function to check if coffee is drinkable (temperature between 40°C and 70°C).

*/

#include<iostream>
using namespace std;

class Coffee{

  public:
  string size;
  double temperature;

  Coffee(string size,double temperature){

    if(temperature>90){  // constructor that validates temperature cannot be above 90°C
      cout<<"Temperature cannot be above 90°C"<<endl;
    }else{
      this->size=size;
      this->temperature=temperature;
    }

  }

  void drinkable(){    // member function
    if(temperature>=40 && temperature<=70){
      cout<<"Coffee is drinkable"<<endl;
    }else{
      cout<<"Coffee is not drinkable"<<endl;
    }
  }

};

int main(){

  Coffee c1("small",89);
  c1.drinkable();

  Coffee c2("medium",50);
  c2.drinkable();
  return 0;
}
