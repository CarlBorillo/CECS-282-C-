
#include <string>
#include "Can.h"
#include <iostream>
using namespace std;

Can::Can() {
  type = 'X';
  volume = 'X';
}

Can::Can(std::string type,int volume){
  this->volume = volume;
  this->type = type;
}

void Can::setCan(std::string type,int volume) {
  this->volume = volume;
  this->type = type;
}

int Can::getVolume(){
  return this->volume;
}

std::string Can::getType() {
  return this->type;
}

void Can::display() {
	 std::cout << volume << " ounces of " << type << endl;

}