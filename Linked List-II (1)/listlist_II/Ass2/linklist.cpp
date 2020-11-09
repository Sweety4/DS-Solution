#include"linklist.h"
Linklist::Linklist()
{
	head = NULL;
}
Node *Linklist::createNode(int data)
{
	Node *record;
	record = new Node();
	record->setData(data);
	record->setNext(NULL);
	return record;

}
void Linklist::addEnd(int data)
{
	Node *newnode, *move;
	newnode = createNode(data);
	if (head == NULL)
		head = newnode;
	else
	{
		move = head;
		while (move->getNext() != NULL)
			move = move->getNext();
		move->setNext(newnode);
	}
}
void Linklist::createLinklist(int no)
{
	int i, data;
	Node *newnode, *move;
	for (int i = 0; i < no; i++)
	{
		cout << "\n\n\t Enter interger data to insert ";
		cin >> data;
		newnode = createNode(data);
		//  check if it is first node or not
		if (head == NULL)
		{
			head = newnode;
			//cout << "\n\n\t ROOT Node Created !! ";
		}
		else
		{
			//link the node to linklist
			move = head;
			while (move->getNext() != NULL)
			{
				move = move->getNext();
			}
			move->setNext(newnode);
			//cout << "\n\t New Node Added !!! ";
		}

	}

}
void Linklist::splitLinklist()
{
	Linklist l1, l2;
	Node *temp, *move=head;
	for (int i = 0; move != NULL; i++)
	{
		//temp = createNode(move->getData());
		if (i % 2 == 0)
		{
			l1.addEnd(move->getData());
		}
		else
		{
			l2.addEnd(move->getData());
		}
		move = move->getNext();
	}
	cout << "\n\n\t ****** First Link List ********* ";
	l1.Display();
	cout << "\n\n\t ****** Second Link List ********* ";
	l2.Display();
}
void Linklist::Display()
{
	Node *move;
	move = head;
	while (move != NULL)
	{
		cout << "\n\n\t" << move << "\t" << move->getData() << "\t" << move->getNext();

		move = move->getNext();
	}
}