#pragma once
#include<iostream>
using namespace std;

#ifndef NODE_
#define NODE_
class cNode
{
	int data;
	cNode* next;
public:
	cNode();
	cNode(int, cNode*);
	void setData(int);
	void setNext(cNode*);

	int getData();
	cNode* getNext();
};
#endif

