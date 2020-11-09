#include"tree.h"
Node::Node()
{
	data = 1;
	left = right = NULL;
}
void Node::SetData(int d)
{
	data = d;
}
void Node::SetLeft(Node *n)
{
	left = n;
}
void Node::SetRight(Node *n)
{
	right = n;
}
int Node::GetData()
{
	return data;
}
Node* Node::GetLeft()
{
	return left;
}
Node* Node::GetRight()
{
	return right;
}

/*Search the element without using recurssion*/
void cTree::Search(int ele)
{
	Node *Temp =GetRoot();
	while (Temp != NULL && Temp->GetData()!= ele)
	{
		if (ele<Temp->GetData())
			Temp = Temp->GetLeft();
		else
			Temp = Temp->GetRight();
	}
	if (Temp == NULL)
		cout << "\nData Not found";
	else
		cout<<"\n\n\n  data found"<< Temp->GetData();
}


Node* cTree::CreateNode(int data)
{
	Node *newnode;
	newnode = new Node();
	newnode->SetData(data);
	newnode->SetLeft(NULL);
	newnode->SetRight(NULL);
	return newnode;
}
cTree::cTree()
{
	root = NULL;
}
Node* cTree::GetRoot()
{
	return root;
}
void cTree::AddNode(int data)
{
	Node *newnode, *move;
	char ch;
	newnode = CreateNode(data);
	if (root == NULL)
	{
		root = newnode;
		cout << "\n\n\t Root Created !!! ";
	}
	else
	{
		move = root;
		while (1)
		{
			if (newnode->GetData()<move->GetData())
			{
				if (move->GetLeft() == NULL)
				{
					move->SetLeft(newnode);
					cout << "\n\n\t New Node Added At Left Of " << move->GetData();
					break;
				}
				else
					move = move->GetLeft();
			}
			else if (newnode->GetData()>move->GetData())
			{
				if (move->GetRight() == NULL)
				{
					move->SetRight(newnode);
					cout << "\n\n\t New Node Added At Right Of " << move->GetData();
					break;
				}
				else
					move = move->GetRight();
			}
			else
			{
				cout << "\n\n\t Duplicate Not Allowed !!! ";
				break;
			}
		}
	}
}

void cTree::InOrder(Node *r)
{
	if (r != NULL)
	{
		InOrder(r->GetLeft());
		cout << "    " << r->GetData();
		InOrder(r->GetRight());
	}
}

void cTree::PreOrder(Node *r)
{
	if (r != NULL)
	{
		cout << "    " << r->GetData();
		PreOrder(r->GetLeft());
		PreOrder(r->GetRight());
	}
}
void cTree::PostOrder(Node *r)
{
	if (r != NULL)
	{
		PostOrder(r->GetLeft());
		PostOrder(r->GetRight());
		cout << "    " << r->GetData();
	}

}

void cTree::Display()
{
	cout << "\n\n\t **** InOrder ***** \n\n\n";
	InOrder(GetRoot());
	cout << "\n\n\t **** PreOrder ***** \n\n\n";
	PreOrder(GetRoot());
	cout << "\n\n\t **** PostOrder ***** \n\n\n";
	PostOrder(GetRoot());
}

void cTree::DeleteNode(int data)
{
	Node *temp, *tag = NULL, *tr;
	if (root == NULL)
	{
		cout << "\n\tTree is empty....";
		return;
	}
	//Search Node
	for (temp = root; temp != NULL && temp->GetData() != data;)
	{
		tag = temp;
		if (temp->GetData() > data)
			temp = temp->GetLeft();
		else
			temp = temp->GetRight();
	}
	if (temp == NULL)
	{
		cout << "\n\tData Not Found.....";
		return;
	}
	if (temp->GetRight() == NULL)
	{
		if (tag->GetData() < data)
			tag->SetRight(temp->GetLeft());
		else
			tag->SetLeft(temp->GetLeft());

	}
	else if (temp->GetRight() != NULL)
	{
		if (temp->GetLeft() != NULL)
		{
			for (tr = temp->GetRight(); tr->GetLeft() != NULL; tr = tr->GetLeft());
			tr->SetLeft(temp->GetLeft());
		}
		if (tag->GetData() > temp->GetData())
			tag->SetLeft(temp->GetLeft());
		else
			tag->SetRight(temp->GetLeft());
	}
	delete temp;
}