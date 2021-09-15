#include "Student.h"
#include <iostream>

Student::Student(const std::string& name, const int age, const std::string& student_id)
	: Person(name, age)
{
	SetStudentID(student_id);
}

Student::~Student()
= default;

std::string Student::GetStudentID() const
{
	return m_studentID;
}

bool Student::IsStudying() const
{
	return m_isStudying;
}

void Student::SetStudentID(const std::string student_id)
{
	m_studentID = student_id;
}

void Student::SetIsStudying(const bool state)
{
	m_isStudying = state;
}

void Student::Studies() const
{
	std::cout << GetName() << " is studying" << std::endl;
}