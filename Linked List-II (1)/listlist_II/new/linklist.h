#pragma once
#include"cNode.h"

#ifndef LINKEDLIST_
#define LINKEDLIST_

class cLinkedList
{
	cNode* head;
public:
	cLinkedList();
	cNode* getHead()
	{
		return head;
	}
	void createLinkedList(int);

	int countNode();
	void AddBeg(int);
	void AddMid(int, int);
	void AddEnd(int);

	void deleteEnd();
	void deleteMid(int);
	void deleteBeg();
	void Display();
	cNode* createNode(int);
	void printReverse();
	void reverseLinklist();
	~cLinkedList();
};
#endif

