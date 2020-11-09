#pragma once

#include<iostream>
using namespace std;
#define ERROR -9999
class Node
{
	int data;
	Node *next;
public:
	Node();
	int getData();
	Node* getNext();
	void setData(int);
	void setNext(Node*);
};

