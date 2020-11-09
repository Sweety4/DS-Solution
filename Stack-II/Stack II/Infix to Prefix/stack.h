#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
using namespace std;

class cStack
{
	int size;
	int top;
	char *arr;
public:
	cStack();
	cStack(int);
	int IsFull();
	int IsEmpty();
	void Push(char);
	char Pop();
	char Peek();
	void Display();
	~cStack();
};
void Convert_Infix_Pre(char * Infix, char * Postfix);