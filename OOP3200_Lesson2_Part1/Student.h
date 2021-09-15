#pragma once
#ifndef __STUDENT__
#define __STUDENT__

#include "Person.h"

class Student : public Person // colon means: extends or inherits from
{
public:
	// CONSTRUCTOR(S)
	Student(const std::string& name, int age);

	// DESTRUCTOR
	~Student();

	// GETTERS (ACCESSORS)
	std::string GetStudentID();
	bool IsStudying();

	// SETTERS (MUTATORS)
	void SetStudentID(std::string student_id);
	void SetIsStudying(bool state);

	// METHODS (PUBLIC FUNCTIONS)
	

private:
	std::string m_studentID;
	bool m_isStudying;
};

#endif /* defined (__STUDENT__) */