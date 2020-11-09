#pragma once
#include<iostream>
using namespace std;

class Node
{
	int data;
	char rthread, lthread;
	Node *left, *right;
public:
	Node();
	void SetData(int);
	void SetRthread(char);
	void SetLThread(char);
	void SetLeft(Node*);
	void SetRight(Node*);
	int GetData();
	char GetRthread();
	char GetLthread();
	Node* GetLeft();
	Node* GetRigth();

};
class  ThreadBinaryTree
{
	Node *root;
public:
	ThreadBinaryTree();
	Node* GetRoot();
	Node* CreateNode(int);
	void AddNode(int);
	void Display();
	void InOrder(Node*);
	void PreOrder(Node*);
};
