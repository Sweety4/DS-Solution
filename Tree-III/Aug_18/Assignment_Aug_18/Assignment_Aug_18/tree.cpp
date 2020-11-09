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
void cTree::NonPostOrder(Node *root)
{
	if (root == NULL)
		return;

	stack<Node *> s1, s2;
	s1.push(root);
	Node* move;

	while (!s1.empty())
	{
		move = s1.top();
		s1.pop();
		s2.push(move);

		if (move->GetLeft()!=NULL)
			s1.push(move->GetLeft());
		if (move->GetRight()!=NULL)
			s1.push(move=move->GetRight());
	}

	while (!s2.empty())
	{
		move = s2.top();
		s2.pop();
		cout << move->GetData()<< " ";
	}
}
void cTree::NonPreOrder(Node *root)
{
	stack<Node *> s;
	Node *curr = root;

	while (curr != NULL || s.empty() == 0)
	{
		while (curr != NULL)
		{
			cout << curr->GetData() << " ";
			s.push(curr);
			curr = curr->GetLeft();
		}
		curr = s.top();
		s.pop();
		curr = curr->GetRight();

	}
}
void cTree::Display()
{
	cout << "\n\n\t **** InOrder ***** \n\n\n";
	NonInOrder(GetRoot());
	cout << "\n\n\t **** PreOrder ***** \n\n\n";
	NonPreOrder(GetRoot());
	cout << "\n\n\t **** PostOrder ***** \n\n\n";
	NonPostOrder(GetRoot());
}
void cTree::NonInOrder(Node *root)
{
	stack<Node *> s;
	Node *curr = root;

	while (curr != NULL || s.empty() == 0)
	{
		while (curr != NULL)
		{
			s.push(curr);
			curr = curr->GetLeft();
		}
		curr = s.top();
		s.pop();
		cout << curr->GetData() << " ";
		curr = curr->GetRight();

	}
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