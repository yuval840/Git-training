#pragma once
#include "Person.h"
class Employee : public Person
{
	float salary;
public:
	Employee();
	~Employee(){}
};