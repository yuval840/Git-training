#include "Student.h"

Student::Student()
{
	cout << "Enter the average: ";
	cin >> average;
	cin.ignore();
	do
	{
		cout << "Enter institute name: ";
		getline(cin,institute);
	} while (institute.length() > 10);
}
