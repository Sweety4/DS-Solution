#include"linklist.h"
Node* Linklist::CreateNode(int d)
{
	Node* record;
	record = new Node();
	record->SetData(d);
	record->SetNext(NULL);
	return record;
}
void Linklist::AddEnd(int d)
{
	Node *newnode, *move;
	newnode = CreateNode(d);
	if (head == NULL)
		head = newnode;
	else
	{
		move = head;
		while (move->GetNext() != NULL)
			move = move->GetNext();
		move->SetNext(newnode);
		newnode->SetPrev(move);
	}
}
void Linklist::CreateLinklist(int n)
{
	int data;
	for (int i = 1; i <= n; i++)
	{
		cout << "\n\n\t Enter Data TO Insert ";
		cin >> data;
		AddEnd(data);
	}
	
}
void Linklist::Display()
{
	Node *move = head;
	cout << "\n\n\t Linklist Is \n\n";
	while (move->GetNext() != NULL)
	{
		cout << move->GetData() << "-->";
		move = move->GetNext();
	}
	cout << move->GetData();
}
int Linklist::CountNode()
{
	int cnt = 0;
	Node *move = head;
	while (move != NULL)
	{
		cnt++;
		move = move->GetNext();;
	}
	return cnt;

}
void Linklist::Insert(int data, int pos)
{
	Node *newnode, *move;
	int cnt = CountNode();
	//4  3
	if (pos > cnt+1)
	{
		cout << "\n\n\t Not Available !!! ";
		return;
	}
	newnode = CreateNode(data);
	if (pos == 1)
	{
		if (head == NULL)
			head = newnode;
		else
		{
			newnode->SetNext(head);
			head->SetPrev(newnode);
			head = newnode;
		}
	}
	else
	{
		move = head;
		for (int i = 1; i < pos - 1; i++)
			move = move->GetNext();
		newnode->SetNext(move->GetNext());
		newnode->SetPrev(move);
		move->SetNext(newnode);
		if (newnode->GetNext() != NULL)
			(newnode->GetNext())->SetPrev(newnode);
	}
}
void Linklist::Delete(int data)
{
	Node *del, *temp, *move;
	if (head == NULL)
	{
		cout << "\n\n\t Link List Is empty !!! ";
	}
	else
	{
		temp = head;
		if (head->GetData() == data)
		{
			del = head;
			head = head->GetNext();
			head->SetPrev(NULL);
			free(del);
		}
		else
		{
			while (temp != NULL)
			{
				if ((temp->GetNext())->GetData() == data)
				{
					del = temp->GetNext();

					temp->SetNext(del->GetNext());

					if (temp->GetNext() != NULL)
						temp->GetNext()->SetPrev(head);
					delete del;
					break;
				}
				temp = temp->GetNext();
			}
		}
	}

}

void Linklist::PrintReverse()
{
	Node *move=head;
	while (move->GetNext() != NULL)
		move = move->GetNext();
	while (move != NULL)
	{
		cout << "\n\t\t " << move->GetData();
		move = move->GetPrev();
	}
}
void Linklist::Sort()
{
	Node * Temp, *Tag;
	if (head != NULL)
	{
		for (Temp = head; Temp->GetNext() != NULL; Temp = Temp->GetNext())
		{
			for (Tag = Temp->GetNext(); Tag != NULL; Tag = Tag->GetNext())
			{
				if (Temp->GetData() >Tag->GetData())
				{
					int Swap;
					Swap = Temp->GetData();;
					Temp->SetData(Tag->GetData());
					Tag->SetData(Swap);
				}
			}
		}
	}
}
