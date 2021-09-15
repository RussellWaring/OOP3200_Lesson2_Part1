#pragma once
#ifndef __STUDENT__
#define __STUDENT__

#include "Person.h"

class Student : public Person // colon means: extends or inherits from
{
public:
	// CONSTRUCTOR(S)
	Student(const std::string& name, const int age, const std::string& student_id);

	// DESTRUCTOR
	~Student();

	// GETTERS (ACCESSORS)
	std::string GetStudentID() const;
	bool IsStudying() const;

	// SETTERS (MUTATORS)
	void SetStudentID(std::string student_id);
	void SetIsStudying(bool state);

	// METHODS (PUBLIC FUNCTIONS)
	void Studies() const;

private:
	std::string m_studentID;
	bool m_isStudying;
};

#endif /* defined (__STUDENT__) */