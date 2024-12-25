/*

1. Student Management System

Create a program to manage student records. Each record should have:

    Student Name
    Roll Number
    Marks in 3 subjects
    Calculate total and average marks using a method.
    Display details of students who scored above 75% on average.

*/

#include<iostream>
using namespace std;

class Student{
  public:
    string name;
    int roll;
    int m1;
    int m2;
    int m3;

  void calculate(){
    int total = m1 + m2 + m3;
    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << total / 3 << endl;
  }

  void assignValues(string n,int r,int ma1,int ma2,int ma3){
    name = n;
    roll = r;
    m1 = ma1;
    m2 = ma2;
    m3 = ma3;
  }

  void findPercentage(){
    float total = m1 + m2 + m3;
    float percentage = (total / 300)*100;
    cout << "Percentage is : " << percentage << "%"<< endl;

  }

};

int main()
{

  Student s1;
  s1.assignValues("Bascom",12,80,80,80);
  s1.calculate();
  s1.findPercentage();

  Student s2;
  s2.assignValues("Arpit",13,71,56,85);
  s2.calculate();
  s2.findPercentage();

  return 0;
}
