#include <iostream>
#ifndef Person_H
#define Person_h
#define MAX_LENGTH 10

using namespace std;

class Person {
	string name;
	long id;
	int age;
public:
	Person();
	~Person() {}
};
#endif // !Person_H

