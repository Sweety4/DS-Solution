#pragma once
#include"node.h"

class cQueue
{
	Node *rear, *front;
public:
	cQueue();
	Node*  CreateNode(int);
	void EnQueue(int);
	int DeQueue();
	int IsEmpty();
	void Display();
};

