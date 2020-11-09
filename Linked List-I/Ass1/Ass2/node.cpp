#include"node.h"
Node::Node()
{
	
	next = NULL;
}
Employee  Node::getData()
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
void Node::setData(Employee data)
{
	this->data = data;
}
void Node::setNext(Node *next)
{
	this->next = next;
}