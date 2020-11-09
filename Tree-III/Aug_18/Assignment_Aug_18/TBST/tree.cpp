#include"tree.h"

Node::Node()
{
	data = 1;
	rthread = lthread = 'T';
	left = right = NULL;

}
void Node::SetData(int d)
{
	data = d;
}
void Node::SetRthread(char ch)
{
	rthread = ch;
}
void Node::SetLThread(char ch)
{
	lthread = ch;
}
void Node::SetLeft(Node *l)
{
	left = l;
}
void Node::SetRight(Node *r)
{
	right = r;
}
int Node::GetData()
{
	return data;
}
char Node::GetRthread()
{
	return rthread;
}
char Node::GetLthread()
{
	return lthread;
}
Node* Node::GetLeft()
{
	return left;
}
Node* Node::GetRigth()
{
	return right;
}




Node* ThreadBinaryTree::CreateNode(int ele)
{
	Node *record;
	record = new Node();
	record->SetData(ele);
	record->SetLeft(NULL);
	record->SetRight(NULL);
	record->SetRthread('T');
	record->SetLThread('T');
	return record;
}

void ThreadBinaryTree::InOrder(Node *root)
{
	Node *curr = root;
	while (curr->GetLthread() == 'L')
		curr = curr->GetLeft();
	while (curr != NULL)
	{
		cout << "  " << curr->GetData();
		if (curr->GetRthread() == 'T')
			curr = curr->GetRigth();
		else
		{
			curr = curr->GetRigth();
			while (curr->GetLthread() == 'L')
				curr = curr->GetLeft();
		}
	}
}

Node* ThreadBinaryTree::GetRoot()
{
	return root;
}

// Actually It is inorder Threaded Binary Search Tree 
// Preorder required lot of implementation


void ThreadBinaryTree::PreOrder(Node *root)
{
	Node *curr = root;
	printf("\n\tPreorder Traversal : ");
	while (curr->GetLthread() == 'L')
	{
		cout << "   " << curr->GetData();
		curr = curr->GetLeft();
	}
	while (curr != NULL)
	{
		if (curr->GetLthread() == 'T')
			cout << "   " << curr->GetData();
		if (curr->GetRthread() == 'T')
		{
			curr = curr->GetRigth();
		}
		else
		{
			curr = curr->GetRigth();
			cout << "   " << curr->GetData();
			while (curr->GetLthread() == 'L')
				curr = curr->GetLeft();
		}
	}

}



ThreadBinaryTree::ThreadBinaryTree()
{
	root = NULL;
}
void ThreadBinaryTree::AddNode(int ele)
{
	Node *temp, *newnode;
	newnode = CreateNode(ele);
	if (root == NULL)
	{
		root = newnode;
		cout << "\nRoot is Created";
		return;
	}
	temp = root;
	while (1)
	{
		if (ele < temp->GetData())
		{
			if (temp->GetLthread() == 'T')
			{
				newnode->SetLeft(temp->GetLeft());
				newnode->SetRight(temp);
				temp->SetLeft(newnode);
				temp->SetLThread('L');
				cout << "\n\n\t Node Added At Left Of " << temp->GetData();
				break;
			}
			else
				temp = temp->GetLeft();
		}
		else if (ele > temp->GetData())
		{
			if (temp->GetRthread() == 'T')
			{
				newnode->SetRight(temp->GetRigth());
				newnode->SetLeft(temp);
				temp->SetRight(newnode);
				temp->SetRthread('L');
				cout << "\n\n\t Node Added At Right Of " << temp->GetData();
				break;
			}
			else
				temp = temp->GetRigth();
		}
		else
		{
			printf("\n\tDuplicate data not allowed");
			break;
		}


	}
}


