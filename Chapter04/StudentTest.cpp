#include "Student.h"

#include <iostream>

int main()
{
	Student student1{ "Jane Green", 93 };
	Student student2{ "John Blude", 72 };

	std::cout << student1.getName() << "'s letter grade equivalent of "
		<< student1.getAverage() << " is: " << student1.getLetterGrade()
		<< std::endl;

	std::cout << student2.getName() << "'s letter grade equivalent of "
		<< student2.getAverage() << " is: " << student2.getLetterGrade()
		<< std::endl;

	return 0;
}