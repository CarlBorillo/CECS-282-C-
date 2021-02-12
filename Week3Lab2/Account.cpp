//Carl Borillo, Tony Tran, Steven Yacoub
//Class (CECS 282-01 Lab:282-03)
//Project Name: (Prog 2 - Object and Class)
//Due Date: 2/3/2021
//Demo Time: 6:11 PM
#include "Account.h"
#include <iostream>
using namespace std;

Account::Account(){
  balance = 0;
}

Account::Account(double initBal){
  balance = initBal;
}

void Account::deposit(double amt){
   balance += amt;
}

void Account::withdraw(double amt){
   if (balance >= amt){
     balance = balance - amt;
   }
   else{
      cout << "$20 penalty" << endl;
      balance -= 20;
   }
}

double Account::getBalance(){
    return balance;
};