
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include"emp.h"
class Node
{
	//int id;
	//char name[20];
	Employee data;
	Node *next;
public:
	Node();
	void nodeDisplay();
	void setData(Employee);
	void setNext(Node*);
	Employee getData();
	Node* getNext();
};