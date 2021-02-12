#include <iostream>
#include <string>
#include "Student.h"

int main() {
  Student students[5];
  students[0] = Student("Tom", 85);
  students[1] = Student("Alice", 71);
  students[2] = Student("Jack", 93);
  students[3] = Student("Mary", 65);
  students[4] = Student("Sue", 40);

  for(int i = 0; i < 5; i++){
    students[i].print();
  }
}