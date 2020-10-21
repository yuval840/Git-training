#include "Employee.h"

Employee::Employee()
{
	do
	{
		cout << "Enter The Salary of Employee: ";
		cin >> salary;

	} while (salary<0);
}
