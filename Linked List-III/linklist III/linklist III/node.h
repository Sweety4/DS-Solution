#include<iostream>
using namespace std;

class Node
{
	int data;
	Node *prev, *next;
public:
	void SetData(int);
	int GetData();
	Node *GetNext();
	Node *GetPrev();
	void SetNext(Node*);
	void SetPrev(Node*);
};
