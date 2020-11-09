#include<iostream>
using namespace std;
#define ERROR -9999
#include"book.h"
class Node
{
	Book data;
	Node *next;
public:
	Node();
	Book getData();
	Node* getNext();
	void setData(Book);
	void setNext(Node*);
};
