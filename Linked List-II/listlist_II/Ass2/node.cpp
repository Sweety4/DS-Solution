#include"node.h"
Node::Node()
{
	data = 0;
	next = NULL;
}
int Node::getData()
{
	return data;
}
void Node::nodeDisplay()
{
	cout << "\n\t " << this << "\t" << data << "\t" << this->next;
}
Node* Node::getNext()
{
	return next;
}
void Node::setData(int data)
{
	this->data = data;
}
void Node::setNext(Node *next)
{
	this->next = next;
}