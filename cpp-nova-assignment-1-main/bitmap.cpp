#include <iostream>
#include <cmath>
#include "bitmap.h"
using namespace std;

Complex::Complex()
{
	real = 0;
	img = 0;
}

Complex::Complex(int r, int i)
{
	real = r;
	img = i;
}

void Complex::Accept()
{
	cout << "Enter values of Real and imaginary parts :" << endl;
	cin >> real >> img;
}

void Complex::Display()
{
	cout << real << "+" << img << "i" << endl;
}

Complex Complex::operator+(Complex &c)
{
	Complex temp;
	temp.real = c.real + this->real;
	temp.img = c.img + this->img;
	return temp;
}

Complex Complex::operator-(Complex &c)
{
	Complex temp;
	temp.real = this->real - c.real;
	temp.img = this->img - c.img;
	return temp;
}
Complex Complex::operator++()
{
	Complex temp;
	temp.real = this->real + 1;
	temp.img = this->img + 1;
	return temp;
}

Complex Complex::operator++(int)
{
	Complex temp;
	temp.real = this->real - 1;
	temp.img = this->img - 1;
	return temp;
}

bool Complex::operator==(Complex &c)
{
	bool flag = true;
	flag = (this->img == c.img) && (this->real == c.real);
	return flag;
}
