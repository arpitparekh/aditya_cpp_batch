#include<iostream>
using namespace std;

class College{
  public:
    string college_name;
    string address;

    College(string college_name,string address){
      this->college_name = college_name;
      this->address = address;
    }

};

class Student : public College{
  public:
    string student_name;
    int roll_no;

    Student(string college_name,string address,string student_name,int roll_no) : College(college_name,address){
      this->student_name = student_name;
      this->roll_no = roll_no;
    }

    void display(){
      cout << "College Name: " << college_name << endl;
      cout << "Address: " << address << endl;
      cout << "Student Name: " << student_name << endl;
      cout << "Roll No: " << roll_no << endl;
    }
};

int main(){

  Student s("ABC College","XYZ Street","John Doe",12345);
  s.display();
}
