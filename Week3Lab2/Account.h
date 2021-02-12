//Carl Borillo, Tony Tran, Steven Yacoub
//Class (CECS 282-01 Lab:282-03)
//Project Name: (Prog 2 - Object and Class)
//Due Date: 2/3/2021
//Demo Time: 6:11 PM
#ifndef Account_h
#define Account_h
#include <iostream>
using namespace std;

class Account{
public:
   Account();
   Account(double initBal);
   void deposit(double amt);
   void withdraw(double amt);
   double getBalance();

private:
   double balance;
};
#endif