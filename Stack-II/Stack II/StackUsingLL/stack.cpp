#include"stack.h"
cStack::cStack()
{
	top = NULL;
}
Node* cStack::CreateNode(Book data)
{
	Node *record;
	record = new Node;
	record->setData(data);
	record->setNext(NULL);
	return record;
}
void cStack::Push(Book data)
{
	Node *newnode;
	newnode = CreateNode(data);
	if (top == NULL)
		top = newnode;
	else
	{
		newnode->setNext(top);
		top = newnode;
	}
}
int cStack::IsEmpty()
{
	if (top == NULL)
		return 1;
	else
		return 0;
}
Book cStack::Pop() 
{
	Book ele;
	Node *del;
	if (!IsEmpty())
	{
		del = top;
		top = top->getNext();
		ele = del->getData();
	}
	return ele;
}
void cStack::Display()
{
	Node *move;
	move = top;
	while (move != NULL)
	{
		cout << "\n\t\t";
		(move->getData().Display());
		move = move->getNext();
	}
}
