#include<iostream>

using namespace std;

struct User{
  string name;
  int age;
};

int main(){

  struct User user1;
  user1.name = "Bascom";
  user1.age = 20;

  cout << user1.name << endl;
  cout << user1.age << endl;

  struct User arr[3];
  arr[0].name = "Arpit";
  arr[0].age = 21;
  arr[1].name = "Parekh";
  arr[1].age = 22;
  arr[2].name = "Bridge";
  arr[2].age = 23;
  for(int i=0;i<3;i++){    // for multiple value use strucutre array
    cout << arr[i].name << " " << arr[i].age << endl;
  }
}
