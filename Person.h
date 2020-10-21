using namespace std;
#include <string>
#include <iostream>
#ifndef Person_H
#define Person_H
#define MAX_LENGTH 10


class Person {
	string name;
	long id;
	int age;
public:
	Person();
	~Person() {}
};
#endif // !Person_H

