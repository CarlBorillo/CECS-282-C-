//Carl Borillo, Tony Tran, Steven Yacoub
//Class (CECS 282-01 Lab:282-03)
//Project Name: (Prog 2 - Object and Class)
//Due Date: 2/3/2021
//Demo Time: 6:11 PM
#include "Account.h"
#include <iostream>
using namespace std;

int main(){
   Account account(100);    
   account.deposit(50);
   account.withdraw(175);   
   account.withdraw(25);

   cout << "Current Balance: " << account.getBalance() << "\n";
  
   account.withdraw(account.getBalance());
   cout << "Current Balance: " << account.getBalance() << "\n";
 
   return 0;  
}