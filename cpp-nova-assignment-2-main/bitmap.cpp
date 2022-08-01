#include <iostream>
#include <cstring>
#include "bitmap.h"
using namespace std;

Student::Student()
{
	// code here
}

Student::Student(int r, const char *n, int m1, int m2, int m3, int m4, int m5) // here m1,m2,m3,m4 and m5 are marks in each subject
{
	// code here
	rollno = r;
	strcpy(name, n);
	marks[0] = m1;
	marks[1] = m2;
	marks[2] = m3;
	marks[3] = m4;
	marks[4] = m5;
}

void Student::Accept()
{
	// code here
	cout << "Enter name" << endl;
	cin >> name;
	cout << "Enter roll" << endl;
	cin >> rollno;
	cout << "Enter marks ";
	for (int i = 0; i < 5; i++)
		cin >> marks[i];
}

void Student::Display()
{
	cout << "Student name: " << name << "\t"
		 << "Roll no: " << rollno << endl;
	cout << "Marks" << endl;
	for (int i = 0; i < 5; i++)
		cout << marks[i] << "\t";
}

float Student::calcAverage()
{
	float avg;
	for (int i = 0; i < 5; i++)
		avg += (float)marks[i];
	avg /= 5;
	return avg;
}

char Student::calcGrade()
{
	char grade;
	int avg = this->calcAverage();
	if (avg >= 60)
	{
		grade = 'A';
	}
	if (avg >= 50 && avg < 60)
	{
		grade = 'B';
	}
	if (avg >= 40 && avg < 50)
	{
		grade = 'C';
	}
	if (avg < 40)
	{
		grade = 'D';
	}
	return grade;
}

int Student::highestMarks()
{
	int highest = marks[0];
	for (int i = 1; i < 5; i++)
	{
		if (marks[i] > highest)
			highest = marks[i];
	}
	return highest;
}

int Student::lowestMarks()
{
	int lowest;
	for (int i = 1; i < 5; i++)
	{
		if (marks[i] < lowest)
			lowest = marks[i];
	}
	return lowest;
}
