#include"node.h"
int Node::GetData()
{
	return data;
}
void Node::SetData(int dd)
{
	data = dd;
}
Node* Node::GetNext()
{
	return next;
}
Node* Node::GetPrev()
{
	return prev;
}
void Node::SetNext(Node *n)
{

	next = n;
}
void Node::SetPrev(Node *n)
{
	prev = n;
}
