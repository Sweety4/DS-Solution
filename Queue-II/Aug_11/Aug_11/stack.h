#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
using namespace std;

class cStack
{
	int size;
	int top;
	int *arr;
public:
	cStack();
	cStack(int);
	int IsFull();
	int IsEmpty();
	void Push(int);
	int Pop();
	int Peek();
	void Display();
	~cStack();
};
int Postfix_Eva(char *);