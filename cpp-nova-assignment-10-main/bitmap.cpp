#include <iostream>
#include <cstring>
#include <algorithm>
#include "bitmap.h"
using namespace std;

Laptop::Laptop()
{
	// code here
	this->lid = 0;
	this->cost = 0;
}

Laptop::Laptop(int id, const char *m, double c)
{
	// code here
	this->lid = id;
	this->cost = c;
	strcpy(this->make, m);
}

int Laptop::GetLid()
{
	// code here
	return this->lid;
}

char *Laptop::GetMake()
{
	// code here
	return this->make;
}

double Laptop::GetCost()
{
	// code here
	return this->cost;
}

void Laptop::Display()
{
	// code here
	cout << "Laptop manufracturer : " << this->make << endl;
	cout << "Laptop cost : " << this->cost << endl;
	cout << "Laptop id : " << this->lid << endl;
}

void LaptopStore::InsertLaptop(Laptop l)
{
	// code here
	vector<Laptop> laptop_v = this->GetVect_Laptop();
	laptop_v.push_back(l);
}

bool compare(Laptop l1, Laptop l2)
{
	return l1.GetCost() < l2.GetCost();
}

void LaptopStore::SortLaptops()
{
	// code here
	std::sort(
		this->vect_laptop.begin(),
		this->vect_laptop.end(),
		compare);
}

vector<Laptop> LaptopStore::GetVect_Laptop()
{
	// code here
	return this->vect_laptop;
}

Laptop LaptopStore::GetMinCostLaptop()
{
	// code here
	return *std::min_element(this->vect_laptop.begin(),
							 this->vect_laptop.end(),
							 [](Laptop l1, Laptop l2)
							 {
								 return l1.GetCost() < l2.GetCost();
							 });
}

Laptop LaptopStore::GetMaxCostLaptop()
{
	// code here
	return *std::max_element(this->vect_laptop.begin(),
							 this->vect_laptop.end(),
							 [](Laptop l1, Laptop l2)
							 {
								 return l1.GetCost() < l2.GetCost();
							 });
}

void LaptopStore::ShowLaptops()
{
	// code here
	for (Laptop l : this->vect_laptop)
	{
		l.Display();
	}
}
