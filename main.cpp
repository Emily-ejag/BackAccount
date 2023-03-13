#include <iostream>
#include <string>
#include "BankAccount.h"

int main() {
	BankAccount myaccount("Emily Arteaga", 50000);
	BankAccount hisaccount("Bryam Astudillo");

	hisaccount.deposit(500);
	
	cout << hisaccount.getOwner() << "'s account has " << hisaccount.getBalance() << endl;

	hisaccount.withdraw(1000); //should couse warning

	cout << myaccount.getOwner() << "'s account has " << myaccount.getBalance() << endl;

	return 0;
}