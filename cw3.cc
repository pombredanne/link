// Copyright 2012, Carey Riley, Dwayne Reid, <who else?>
#include <iostream>
#include <string>
#include<fstream>
using namespace std;

namespace {
//  inline *calculatetotalfees(int credits, double cost_per_credit, double paid)
//  {s}
}
// Variables ending with '_' are members of a class.
// Person class
class Person {
//  public:
  protected:
    std::string firstname_;
    std::string lastname_;
    class Date {
      int day_;
      int month_;
      int year_;
    };
    std::string address_;
    std::string telephone_;
// virtual show program should call calculatetotalfees
    virtual void show();
};
// Student Class Inherited from Person class
class Student: public Person {
    std::string studentid_;
    int feespaid_;

  public:
// overload operator to increase feespaid by amount specified
// in parameter
    feespaid(int paid) {feespaid_  = feespaid_ operator+ paid;}
  };
// Course class
class Course {
  std::string coursename_;
  std::string coursecode_;
  int number_of_credits_;
  static double cost_per_credit_;
};

int main() {
  Student* student_objects(new Student[10]);  // 10 student objects
  Course* course_objects(new Course[15]);     // 15 course objects
return 0;
}
