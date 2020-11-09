#pragma once
#include"emp.h"
#include<iostream>
using namespace std;
#define ERROR -9999
class cQueue
{
	int size;
	Employee *arr;
	int rear, front;
public:
	cQueue();
	cQueue(int);
	void EnQueue(Employee);
	Employee  DeQueue();
	int  IsEmpty();
	int  IsFull();
	void Display();

};