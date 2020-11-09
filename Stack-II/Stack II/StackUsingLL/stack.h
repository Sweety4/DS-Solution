#include"node.h"

class cStack
{
	Node *top;
public:
	cStack();
	Node*  CreateNode(Book);
	void Push(Book);
	Book Pop();
	int IsEmpty();
	void Display();
};
	
