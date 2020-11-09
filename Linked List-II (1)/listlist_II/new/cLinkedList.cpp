#include"linklist.h"

cLinkedList::cLinkedList()
{
	head = NULL;
}

cNode* cLinkedList::createNode(int data)
{
	cNode* record;
	record = new cNode;
	record->setData(data);
	record->setNext(NULL);
	return record;
}

void cLinkedList::createLinkedList(int terms)
{
	int i, data;
	cNode* newNode, *move;
	for (i = 0; i < terms; i++)
	{
		cout << "\n\n\t Enter Data ";
		cin >> data;
		newNode = createNode(data);
		if (head == NULL)
			head = newNode;
		else
		{
			move = head;
			while (move->getNext() != NULL)
			{
				move = move->getNext();
			}
			move->setNext(newNode);
		}
	}
}

void cLinkedList::AddBeg(int data)
{
	cNode* newNode;
	newNode = createNode(data);
	if (head == NULL)
	{
		head = newNode;
		cout << "\n\n\t New Node Added";
	}
	else
	{
		newNode->setNext(head);
		head = newNode;
	}
}

void cLinkedList::AddMid(int pos, int data)
{
	int cnt = countNode();
	cout << "***CNT****" << cnt;
	cNode* newNode, *move;
	newNode = createNode(data);
	if (pos>cnt)
	{
		cout << "\n\n\t Not Allowed ";
		return;
	}
	if (pos == 1)
	{
		AddBeg(data);
	}
	else
	{
		move = head;
		for (int i = 1; i < pos - 1; i++)
			move = move->getNext();
		newNode->setNext(move->getNext());
		move->setNext(newNode);
	}
	cout << "***POS****" << pos;
}
void cLinkedList::printReverse()
{
	cNode *temp = head, *tag = head;

	//find last node
	while (temp->getNext() != NULL)
	{
		tag = temp;
		temp = temp->getNext();
	}
	//display last node explicitly
	cout << temp->getData() << "->";

	//execute loop until temp reaches head i.e 1st node
	while (tag != head)
	{
		//shift temp one node behind
		temp = tag;
		//start traversing tag from 1st node until next node temp is found
		tag = head;
		while (tag->getNext() != temp)
		{
			tag = tag->getNext();
		}
		cout << temp->getData() << "->";
	}
	//last node should be printed explicitly
	cout << head->getData() << "->NULL";

}
//reverse entire Linked list
void cLinkedList::reverseLinklist()
{
	cNode *Prev = head;
	cNode *Curr = Prev->getNext();
	cNode *Next = Prev->getNext()->getNext();

	while (Curr != NULL)
	{
		Curr->setNext(Prev);
		Prev = Curr;
		Curr = Next;
		if (Next != NULL)
			Next = Next->getNext();
	}
	head->setNext(NULL);
	head = Prev;
}
cLinkedList::~cLinkedList()
{
	cNode *temp = head;
	if (head != NULL)
	{
		while (head != NULL)
		{
			temp = head;
			head = head->getNext();
			delete temp;
		}
		head = NULL;
		temp = NULL;
	}
}
ostream & operator << (ostream &o, cLinkedList &s)
{
	cNode *temp = s.getHead();
	if (s.getHead() == NULL)
		o << "\n\t*************Linked list is empty*************\n";
	else
	{
		cout << "\n\n\tLinked List::\n";
		while (temp != NULL)
		{
			o << "" << temp->getData() << "->";
			temp = temp->getNext();
		}
		o << "NULL\n\n";
	}
	return o;
}
void cLinkedList::AddEnd(int data)
{
	int cnt = countNode();
	cNode* newNode, *move;
	newNode = createNode(data);

	if (head == NULL)
	{
		head = newNode;
		cout << "\n\n\t New Node Added";
	}
	else
	{
		move = head;
		for (int i = 1; i < cnt - 1; i++)
			move = move->getNext();
		newNode->setNext(move->getNext());
		move->setNext(newNode);
	}
}

void cLinkedList::deleteBeg()
{

}
void cLinkedList::deleteMid(int pos)
{
	cNode* move, *del;
	move = head;
	for (int i = 0; i < pos - 1; i++)
		move = move->getNext();
	del = move->getNext();
	delete del;
}
void cLinkedList::deleteEnd()
{
	int pos = countNode();
	cNode* move, *del;
	move = head;
	for (int i = 1; i < pos - 1; i++)
		move = move->getNext();

	del = move->getNext();
	move->setNext(del->getNext());
	delete del;
}

int cLinkedList::countNode()
{
	int cnt = 0;
	cNode* move;
	move = head;
	while (move != NULL)
	{
		cnt++;
		move = move->getNext();
	}
	return cnt;
}

void cLinkedList::Display()
{
	cNode* move;
	move = head;
	while (move != NULL)
	{
		cout << "\n\n\t " << move << "\t" << move->getData() << "\t" << move->getNext();
		move = move->getNext();
	}
}