#include "Student.h"
#include <string>
#include <iostream>

/*
private: 
    int score;
    std::string name;
  public:
    Student();
    Student(std::string name, int score);
    int getScore();
    std::string getName();
    char getGrade();
    void print();

 */

Student::Student()
{
  name = "";
  score = 0;
}

Student::Student(std::string name, int score){
  this->name = name;
  this->score = score;
}



char Student::getGrade(){
  if(score >= 90) return 'A';
  else if(score >= 80) return 'B';
  else if(score >= 70) return 'C';
  else if(score >= 60) return 'D';
  else return 'F';
}

int Student::getScore(){
  return score;
}

std::string Student::getName(){
  return name;
}

void Student::print(){
  std::cout << name << "   " << score << "   " << getGrade() << std::endl;
}