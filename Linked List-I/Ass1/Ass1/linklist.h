#define _CRT_SECURE_NO_WARNINGS
#include"node.h"
class Linklist
{
	Node *head;
public:
	Linklist();
	Node *createNode(int);
	void createLinklist(int);

	void Display();
};