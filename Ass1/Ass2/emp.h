#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

#ifndef EMP
#define EMP
class Employee
{
	int id;
	char name[20];
public:
	Employee();
	Employee(int, const char*);
	void Accept();
	void Display();
	friend ostream& operator<<(ostream&, Employee&);
	friend istream& operator>>(istream&, Employee&);
};
#endif