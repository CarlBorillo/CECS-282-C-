#import <string>
#ifndef STUDENT_H
#define STUDENT_H

class Student{
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

};

#endif