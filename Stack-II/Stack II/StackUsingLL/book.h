#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

#ifndef BOOK
#define BOOK

class Book
{
	int id;
	char name[20];
public:
	Book();
	Book(int, const char*);
	void Display();
	friend ostream& operator<<(ostream&, Book&);
	friend istream& operator>>(istream&, Book&);

};
#endif