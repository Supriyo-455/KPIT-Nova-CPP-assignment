#include <iostream>
#include <cstring>
#include "bitmap.h"
using namespace std;

Employee::Employee()
{
	// code here
	this->basicsalary = 0;
	this->empid = 0;
}
Employee::Employee(int id, const char *n, double sal)
{
	// code here
	strcpy(this->name, n);
	this->empid = id;
	this->basicsalary = sal;
}

double Employee::GetBasicSalary()
{
	// code here
	return this->basicsalary;
}

const char *Employee::GetName()
{
	return this->name;
}

int Employee::GetID()
{
	return this->empid;
}

void Employee::Display()
{
	// code here
	cout << "Employee name : " << this->name << endl;
	cout << "Employee id : " << this->empid << endl;
	cout << "Employee salary : " << this->GetBasicSalary() << endl;
}

WageEmployee::WageEmployee()
{
	// code here
	this->rate = 0;
	this->hours = 0;
}

WageEmployee::WageEmployee(int id, const char *n, double sal, int h, int r) : Employee(id, n, sal)
{
	// code here
	this->hours = h;
	this->rate = r;
}

int WageEmployee::GetHours()
{
	return this->hours;
}

int WageEmployee::GetRate()
{
	return this->rate;
}

double WageEmployee::CalcNetSalary()
{
	// code here
	return (this->GetBasicSalary() + (this->hours * this->rate));
}

bool WageEmployee::IsTaxable()
{
	// code here
	return this->CalcNetSalary() > 500000;
}
void WageEmployee::Display()
{
	// code here
	cout << "Wage Employee" << endl;
	cout << "Employee name : " << this->GetName() << endl;
	cout << "Employee id : " << this->GetID() << endl;
	cout << "Employee salary : " << this->GetBasicSalary() << endl;
	cout << "Employee net salary : " << this->CalcNetSalary() << endl;
	cout << "Employee rate :" << this->GetRate() << endl;
	cout << "Employee hours : " << this->GetHours() << endl;
}

SalesPerson::SalesPerson()
{
	// code here
	this->comm = 0;
	this->sales = 0;
}

SalesPerson::SalesPerson(int id, const char *n, double sal,
						 int h, int r, int s, int c) : WageEmployee(id, n, sal, h, r)
{
	// code here
	this->sales = s;
	this->comm = c;
}

double SalesPerson::CalcNetSalary()
{
	// code here
	return (this->GetBasicSalary() + (this->GetHours() * this->GetRate()) + (this->sales * this->comm));
}

bool SalesPerson::IsTaxable()
{
	// code here
	return this->CalcNetSalary() > 500000;
}

void SalesPerson::Display()
{
	// code here
	cout << "Sales person" << endl;
	cout << "Employee name : " << this->GetName() << endl;
	cout << "Employee id : " << this->GetID() << endl;
	cout << "Employee salary : " << this->GetBasicSalary() << endl;
	cout << "Employee net salary : " << this->CalcNetSalary() << endl;
	cout << "Employee rate :" << this->GetRate() << endl;
	cout << "Employee hours : " << this->GetHours() << endl;
	cout << "Employee commision :" << this->comm << endl;
	cout << "Employee sales : " << this->sales << endl;
}
