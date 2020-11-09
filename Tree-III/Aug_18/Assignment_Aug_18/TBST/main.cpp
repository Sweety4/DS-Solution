#include"tree.h"
int main()
{
	int ch, ele;
	Node *root = NULL;
	ThreadBinaryTree t1;
	do
	{
		cout << "\n\n\t\t1. Add Node\
                 \n\t\t2. Dipslay\
                 \n\t\t0. Exit\
                 \n\t Enter Your choice ";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "\nEnter the element";
			cin >> ele;
			t1.AddNode(ele);
			break;
		case 2:
			t1.InOrder(t1.GetRoot());
			break;
		case 3:
			t1.PreOrder(t1.GetRoot());
		}
	} while (ch != 0);
	//return 0;
}
