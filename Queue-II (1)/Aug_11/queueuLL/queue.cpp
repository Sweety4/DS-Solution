#include"node.h"
Node::Node()
{
	data = 1;
	next = NULL;
}
int Node::getData()
{
	return data;
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
