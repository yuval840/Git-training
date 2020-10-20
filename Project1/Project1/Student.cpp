#include "Student.h"

Student::Student()
{
	cout << "Enter the average: ";
	cin >> average;
	do
	{
		cout << "Enter institute name: ";
		cin >> institute;
	} while (institute.size() > 10);
}
