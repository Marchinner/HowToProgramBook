#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
public:
	Student(const std::string& studentName, int studentAverage);

	void setName(const std::string& studentName);
	
	std::string getName() const;
	
	void setAverage(int studentAverage);

	int getAverage() const;

	std::string getLetterGrade() const;

private:
	std::string m_name;
	int			m_average{ 0 };

};

#endif // !STUDENT_H
