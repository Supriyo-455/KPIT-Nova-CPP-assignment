#include "bitmap.h"

/*
    Method to calculate and return Result Grade for Student
*/

char Student::CalculateGrade()
{
    int marks = this->GetTotalMarks();
    if (marks == -1)
    {
        return '-';
    }
    if (marks > 100)
    {
        return '#';
    }
    if (marks >= 85 && marks <= 100)
    {
        return 'O';
    }
    if (marks >= 61 && marks <= 84)
    {
        return 'A';
    }
    if (marks >= 40 && marks <= 60)
    {
        return 'P';
    }
    if (marks < 40)
    {
        return 'F';
    }
    return '-';
}

/*
    This method returns the name of the student
*/

std::string Student::GetStudentName()
{
    return this->StudentName;
}

/*
    This method returns the ID of the  student
*/

std::string Student::GetStudentId()
{
    return this->StudentId;
}

/*
    Parameterized constructor for Engineering Student
*/

EngineeringStudent::EngineeringStudent(std::string name, std::string id, int thMarks, int prMarks)
{
    this->StudentName = name;
    this->StudentId = id;
    this->TheoryMarks = thMarks;
    this->PractialMarks = prMarks;
}

/*
    Method to calculate and return Total Marks for EngineeringStudent
*/

void EngineeringStudent::CalculateMarks()
{
    this->TotalMarks = this->GetTheoryMarks() + this->GetPracticalMarks();
}

/*
    Method to return Practical marks of the EngineeringStudent
*/

int EngineeringStudent::GetPracticalMarks()
{
    return this->PractialMarks;
}

/*
    Method to return Theory marks of the EngineeringStudent
*/

int EngineeringStudent::GetTheoryMarks()
{
    return this->TheoryMarks;
}

/*
    Method to get total marks for engineering student
*/

int EngineeringStudent::GetTotalMarks()
{
    return this->TotalMarks;
}

/*
    Parameterized constructor for Architecture Student
*/

ArchitectureStudent::ArchitectureStudent(std::string name, std::string id, int dgMarks, int thMarks)
{
    this->StudentName = name;
    this->StudentId = id;
    this->DesignMarks = dgMarks;
    this->ThesisMarks = thMarks;
}

/*
    Method to calculate and return Total Marks for ArchitectureStudent
*/

void ArchitectureStudent::CalculateMarks()
{
    this->TotalMarks = this->DesignMarks + this->ThesisMarks;
}

/*
    Method to return Design marks of the ArchitectureStudent
*/

int ArchitectureStudent::GetDesignMarks()
{
    return this->DesignMarks;
}

/*
    Method to return Thesis marks of the ArchitectureStudent
*/
int ArchitectureStudent::GetThesisMarks()
{
    return this->ThesisMarks;
}

/*
    This method returns the total marks for architecture student
*/

int ArchitectureStudent::GetTotalMarks()
{
    return this->TotalMarks;
}