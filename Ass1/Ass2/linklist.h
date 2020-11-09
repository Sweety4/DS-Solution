
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include"node.h"


class Linklist
{
	Node *head;
public:
	Linklist();
	Node *createNode(Employee);
	void createLinklist(int);
	void Display();
};