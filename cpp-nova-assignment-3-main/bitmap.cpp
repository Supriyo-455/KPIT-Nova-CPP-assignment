#include <iostream>
#include <cstring>
#include "bitmap.h"
using namespace std;

Account::Account()
{
	// code here
	this->setAccno(0);
	this->setBalance(0);
}

Account::Account(int acc, const char *n, double bal)
{
	// code here
	this->setName(n);
	this->setAccno(acc);
	this->setBalance(bal);
}

void Account::accept()
{
	// code here
	char *n;
	cout << "Enter the account name" << endl;
	cin >> n;
	int acc;
	cout << "Enter the account number" << endl;
	cin >> acc;
	int bal;
	cout << "Enter the account balance" << endl;
	cin >> bal;
	this->setName(n);
	this->setAccno(acc);
	this->setBalance(bal);
}

void Account::display()
{
	// code here
	cout << "Account name :" << this->getName() << endl;
	cout << "Account number :" << this->getAccno() << endl;
	cout << "Account balance :" << this->getBalance() << endl;
}

void Account::deposite(int amount)
{
	// code here
	double b = this->getBalance();
	b += amount;
	this->setBalance(b);
}

void Account::withdraw(int amount)
{
	// code here
	double b = this->getBalance();
	b -= amount;
	if (((int)b) < 0)
		this->setBalance(0);
	else
		this->setBalance(b);
}

int Account::getAccno()
{
	return accno;
}

char *Account::getName()
{
	return name;
}

double Account::getBalance()
{
	return balance;
}

void Account::setAccno(int id)
{
	accno = id;
}

void Account::setName(const char *n)
{
	strcpy(name, n);
}

void Account::setBalance(double bal)
{
	balance = bal;
}

bool Account::searchAccountById(Account *accounts, int size, int id)
{
	// code here
	for (int i = 0; i < size; i++)
	{
		Account ac = *(accounts + 1);
		if (ac.accno == id)
			return true;
	}

	return false;
}

double Account::getHighestBalance(Account *accounts, int size)
{
	int i, highestBal;

	i = 0;
	Account ac = *(accounts + i);
	highestBal = ac.balance;

	for (i = 1; i < size; i++)
	{
		ac = *(accounts + i);
		if (((int)highestBal) < ((int)ac.balance))
			highestBal = ac.balance;
	}

	return highestBal;
}

double Account::getLowestBalance(Account *accounts, int size)
{
	int i, lowestBal;

	i = 0;
	Account ac = *(accounts + i);
	lowestBal = ac.balance;

	for (i = 1; i < size; i++)
	{
		ac = *(accounts + i);
		if (((int)lowestBal) > ((int)ac.balance))
			lowestBal = ac.balance;
	}
	return lowestBal;
}