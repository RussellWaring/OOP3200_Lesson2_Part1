#include "Person.h"
#include <iostream>


Person::Person(const std::string& name, const int age)//Option 1: : m_name(name), m_age(age) // cleaner syntax**
{
	// Option 2: Long initialization
	// initialization option 1
	// m_name = name; 
	// m_age = age; 
	// copies, not good for memory management, "the long way"*

	// Option 3: Use Setters
	SetName(name);
	SetAge(age);
}

Person::~Person()
= default;

/// <summary>
/// This method returns the value of the m_name member variable
/// </summary>
/// <returns></returns>
std::string Person::GetName() const
{
	return m_name;
}

/// <summary>
/// Returns the value of m_age member variable
/// </summary>
/// <returns></returns>
int Person::GetAge() const
{
	return m_age;
}

/// <summary>
/// Takes one string parameter, name, and sets the m_name variable to its value
/// </summary>
/// <param name="name"></param>
void Person::SetName(const std::string& name = "not set")
{
	m_name = name;
	std::cout << "Name set to: " << name << std::endl; //this method allows output
}

/// <summary>
/// Takes one integer parameter, age, and sets the m_age variable to its value
/// </summary>
/// <param name="age"></param>
void Person::SetAge(const int age)
{
	m_age = age;
	std::cout << "Age set to: " << age << std::endl;
}

/// <summary>
/// Outputs the m_name value and says hello
/// </summary>
void Person::SaysHello() const
{
	std::cout << GetName() << " says hello!" << std::endl;
}
