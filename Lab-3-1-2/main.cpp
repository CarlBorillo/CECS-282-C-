//Kenneth Su, Carl Borillo, Frank Alvarez
//CECS 282 (Spring 2021) 
//Week 3, Lab 2 (Can class using separate header file) 
//Demo Time:  6:25 pm February 1, 2021

#include <iostream>
#include "Can.h"
#include <string>
using namespace std;
void arrayDisplay(Can sixPack[]){
int totalVolume = 0;
	for (int i = 0; i < 6; i++){
      sixPack[i].display();
      totalVolume += sixPack[i].getVolume();
  }
  cout << "The total weight of the cans is: " << totalVolume << " ounces." << endl;
}

int main() {
  int totalVolume = 0;
  Can sixPack[6];
  Can c1("Coke", 12);
  Can c2("Mango Monster Energy Drink", 16);
  Can c3("Red Bull", 8);
  Can c4("Bang!", 16);
  Can c5("Venom Energy", 16);
  Can c6("Jolt Cola", 12);
  sixPack[0] = c1;
  sixPack[1] = c2;
  sixPack[2] = c3;
  sixPack[3] = c4;
  sixPack[4] = c5;
  sixPack[5] = c6;
  arrayDisplay(sixPack);
}


