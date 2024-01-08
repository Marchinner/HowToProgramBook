#include "Student.h"

Student::Student(const std::string& studentName, int studentAverage) :
	m_name{ studentName }
{
	setAverage(studentAverage);
}

void Student::setName(const std::string& studentName)
{
	m_name = studentName;
}

std::string Student::getName() const
{
	return m_name;
}

void Student::setAverage(int studentAverage)
{
	if (studentAverage > 0)
		if (studentAverage <= 100)
			m_average = studentAverage;
}

int Student::getAverage() const
{
	return m_average;
}

std::string Student::getLetterGrade() const
{
	std::string letterGrade;

	if (m_average >= 90)
		letterGrade = "A";
	else if (m_average >= 80)
		letterGrade = "B";
	else if (m_average >= 70)
		letterGrade = "C";
	else if (m_average >= 60)
		letterGrade = "D";
	else
		letterGrade = "F";

	return letterGrade;
}