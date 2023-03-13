#include "BankAccount.h"
#include <iostream>

using namespace std;

BankAccount::BankAccount(string owner) {
	this->owner = owner;
	this->balance = 0;
}
BankAccount::BankAccount(string owner, int balance) {
	this->owner = owner;
	if (balance <= 0)
	{
		cout << "the balance must be greater than 0" << endl;
	}else{ this->balance = balance; }
	
}
void BankAccount::deposit(int amount) {
	if (amount <= 0)
	{
		cout << "the amount to deposit must me greater than 0" <<endl;
	}else{ balance += amount; }
}
void BankAccount::withdraw(int amount) {
	if (amount > balance || amount < 0)
	{
		cout << "no sufficient founds, decline!, or withdraw is less than 0" << endl;
	}else{ balance -= amount; }
	
}
string BankAccount::getOwner() {
	return owner;
}
int BankAccount::getBalance() {
	return balance;
}


