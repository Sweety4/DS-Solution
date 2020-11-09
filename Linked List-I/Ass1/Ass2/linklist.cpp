#include"linklist.h"
Linklist::Linklist()
{
	head = NULL;
}
Node *Linklist::createNode(Employee data)
{
	Node *record;
	record = new Node();
	record->setData(data);
	record->setNext(NULL);
	return record;

}
void Linklist::createLinklist(int no)
{
	int i;
	Employee data;
	Node *newnode, *move;
	for (int i = 0; i < no; i++)
	{
		cout << "\n\n\t Enter Employee data to insert ";
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
void Linklist::Display()
{
	Node *move;
	move = head;
	while (move != NULL)
	{
		cout << "\n\n\t" << move << "\t";
		move->getData().Display();
		cout<<"\t" << move->getNext();
		move = move->getNext();
	}
}