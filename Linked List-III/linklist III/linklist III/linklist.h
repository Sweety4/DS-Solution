#pragma once
#include"node.h"
class Linklist
{
	Node *head;
public:
	Linklist()
	{
		head = NULL;
	}
	Node* CreateNode(int);
	void CreateLinklist(int);
	void AddEnd(int);
	void Insert(int, int);
	void Display();
	void Delete(int);
	void Modify(int);
	int CountNode();
	void PrintReverse();
	void Sort();
};	