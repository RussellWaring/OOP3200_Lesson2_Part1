#pragma once
#ifndef __PERSON__
#define __PERSON__

#include <string> // include inside definition

class Person
{
public: // accessible outside the class
	// CONSTRUCTOR
	Person(std::string name, int age);

	// DESTRUCTOR
	~Person();

	// GETTERS (ACCESSORS) use get or set inside the naming convention of accessors
	std::string GetName();
	int GetAge();

	// SETTERS (MUTATORS)
	void SetName(std::string name); // typically void, typically requires a value
	void SetAge(int age);

	// METHODS (PUBLIC FUNCTIONS)
	void SaysHello();


private: // accessible only in the class itself
	std::string m_name;
	int m_age;

};

#endif /* defined (__PERSON__) */