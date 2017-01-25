#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee{
private: 
	string lname;
	string fname;
	int syears;
	double salary;
	Employee* ptr;
public:
	Employee();
	Employee(string, string, int,  double);
	~Employee();
};
#endif
