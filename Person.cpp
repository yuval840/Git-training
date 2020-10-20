#include "Person.h"

Person::Person()
{
	cout << "Enter name (Maximum 10 letters): ";
	cin >> name;
	
	while (name.length() > MAX_LENGTH)
	{
		cout << "Name length is too long\nEnter name (Maximum 10 letters): ";
		cin >> name;
	}
	cout << "Enter id: ";
	cin >> id;
	cout << "Enter age:";
	cin >> age;
}