#include "Person.h"

#ifndef Student_H
#define Student_H

class Student : public Person
{
protected:
	int average;
	string institute;
public:
	Student();
	~Student() {};
};
#endif // !Student.h
