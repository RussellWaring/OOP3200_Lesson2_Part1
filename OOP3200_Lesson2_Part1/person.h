#pragma once // MSVS specific guard
#ifndef __PERSON__ // this is referred to as a guard
#define __PERSON__

#include <string> // include inside definition

class Person
{
public: // accessible outside the class
	// CONSTRUCTOR
	Person(const std::string& name, int age);

	// DESTRUCTOR
	~Person();

	// GETTERS (ACCESSORS) use get or set inside the naming convention of accessors
	std::string GetName() const;
	int GetAge() const;

	// SETTERS (MUTATORS)
	void SetName(const std::string& name); // typically void, typically requires a value
	void SetAge(int age);

	// METHODS (PUBLIC FUNCTIONS)
	void SaysHello() const;


private: // accessible only in the class itself
	std::string m_name;
	int m_age;

};

#endif /* defined (__PERSON__) */