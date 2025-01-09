// file handling
// exception handling
#include<iostream>
#include<fstream>

using namespace std;

int main(){

  // folder path = /home/arpit-parekh/files
  // fsteam
  // ifstream  // read
  // ofstream   //write // create

  ////////////////////////  write file ////////////////////////

  // ofstream of;

  // of.open("/home/arpit-parekh/files/hello.txt");
  // if(of.is_open()){
  //   cout<<"file opened successfully"<<endl;
  // }else{
  //   cout<<"file not opened"<<endl;
  // }

  // of << "Hello World" << endl;
  // cout << "File Write Successful" << endl;
  // of.close();

  /////////////////////////  read file ////////////////////////

  ifstream ifs;
  ifs.open("/home/arpit-parekh/files/hello.txt");
  if(ifs.is_open()){
    cout<<"file opened successfully"<<endl;
  }else{
    cout<<"file not opened"<<endl;
  }

  string str;
  // ifs >> str;   // does not include word after space
  getline(ifs, str);
  cout << "File Read Successful" << endl;
  cout << str << endl;
  ifs.close();

  return 0;
}
