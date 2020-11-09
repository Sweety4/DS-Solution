#include"Node.h"

cNode::cNode()
{
	data = 1;
	next = NULL;
}

cNode::cNode(int data, cNode* next)
{
	this->data = data;
	this->next = next;
}

void cNode::setData(int data)
{
	this->data = data;
}

void cNode::setNext(cNode* next)
{
	this->next = next;
}

int cNode::getData()
{
	return data;
}

cNode* cNode::getNext()
{
	return next;
}