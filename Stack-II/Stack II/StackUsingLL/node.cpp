#include"node.h"
Node::Node()
{
	next = NULL;
}
Book Node::getData()
{
	return data;
}
Node* Node::getNext()
{
	return next;

}
void Node::setData(Book data)
{
	this->data = data;
}
void Node::setNext(Node *next)
{
	this->next = next;
}
