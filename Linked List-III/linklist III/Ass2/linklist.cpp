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
	for (i = 0; i < terms; i++)
	{
		cout << "\n\n\t Enter Data ";
		cin >> data;
		AddEnd(data);
	}
}

void cLinkedList::AddBeg(int data)
{
	cNode* newNode;
	newNode = createNode(data);
	if (head == NULL)
	{
		head = newNode;
		head->setNext(head);
		cout << "\n\n\t New Node Added";
	}
	else
	{
		newNode->setNext(head);
		cNode *move = head;
		while (move->getNext() != head)
			move = move->getNext();
		move->setNext(newNode);
		head = newNode;
	}
}

void cLinkedList::AddMid(int pos, int data)
{
	int cnt = countNode();
	cout << "***CNT****" << cnt;
	cNode* newNode, *move;
	if (pos == cnt + 1)
		AddEnd(data);

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
		newNode = createNode(data);
		move = head;
		for (int i = 1; i < pos - 1; i++)
			move = move->getNext();
		newNode->setNext(move->getNext());
		move->setNext(newNode);
	}
	cout << "***POS****" << pos;
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
	//int cnt = countNode();
	cNode* newNode, *move;
	newNode = createNode(data);

	if (head == NULL)
	{
		head = newNode;
		head->setNext(head);
		cout << "\n\n\t New Node Added";
	}
	else
	{
		move = head;
		while(move->getNext()!=head)
			move = move->getNext();
		//newNode->setNext(move->getNext());
		move->setNext(newNode);
		newNode->setNext(head);
	}
}

void cLinkedList::deleteBeg()
{
	cNode *move, *del;
	del = head;
	move = head;
	while (move->getNext() != head)
		move = move->getNext();
	head = head->getNext();
	move->setNext(head);
}
void cLinkedList::deleteMid(int pos)
{
	cNode* move, *del;
	int cnt = countNode();

	if (pos == 1)
     	deleteBeg();
	else if (pos == cnt)
		deleteEnd();
	else
	{
		move = head;
		for (int i = 0; i < pos - 1; i++)
			move = move->getNext();
		del = move->getNext();
		move->setNext(del->getNext());
		delete del;
	}
}
void cLinkedList::deleteEnd()
{
	int pos = countNode();
	cNode* move, *del;
	move = head;
	for (int i = 1; i < pos - 1; i++)
		move = move->getNext();

	del = move->getNext();
	move->setNext(head);
	delete del;
}

int cLinkedList::countNode()
{
	int cnt = 0;
	cNode* move;
	move = head;
	while (move->getNext()!=head)
	{
		cnt++;
		move = move->getNext();
	}
	return cnt + 1;
}

void cLinkedList::Display()
{
	cNode* move;
	move = head;
	while (move->getNext()!=head)
	{
		cout << "\n\n\t " << move << "\t" << move->getData() << "\t" << move->getNext();
		move = move->getNext();
	}
	if(move->getNext()==head)
		cout << "\n\n\t " << move << "\t" << move->getData() << "\t" << move->getNext();

}