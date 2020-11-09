#pragma once
#include<stack>
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
	void NonInOrder(Node*);
	void NonPreOrder(Node*);
	void NonPostOrder(Node*);
	void AddNode(int);
	void DeleteNode(int);
	void InOrder(Node*);
	void PreOrder(Node*);
	void PostOrder(Node*);
	void Search(int);
	void FreeAll(void);
	void Display();
};
