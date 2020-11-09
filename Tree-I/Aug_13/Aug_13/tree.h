#include<iostream>
using namespace std;

/* class for binary search tree Node */
class Node
{
	int data;
	Node * left;
	Node * right;
public:
	Node();
	void SetData(int);
	void SetLeft(Node*);
	void SetRight(Node*);
	int GetData();
	Node* GetLeft();
	Node* GetRight();

};
class cTree
{
	Node *root;
	Node* CreateNode(int);
public:
	cTree();
	Node* GetRoot();
	void AddNode(int);
	void InOrder(Node*);
	void PreOrder(Node*);
	void PostOrder(Node*);
	void Display();
};
