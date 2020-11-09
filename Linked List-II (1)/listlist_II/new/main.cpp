#include"linklist.h"

void main()
{
	/*cLinkedList list1;
	int noOfNodes,ch;
	cout << "\n\n\t Enter number of Nodes: ";
	cin >> noOfNodes;

	list1.createLinkedList(noOfNodes);
	list1.Display();*/
	int ch, no, data, pos;
	cLinkedList list1;

	cout << "\n\n\t Enter Terms: ";
	cin >> no;

	list1.createLinkedList(no);
	do
	{
		cout << "\n\t1.Add at Begining\
				\n\t2.Add at Middle\
				\n\t3.Add at End\
				\n\t0.Exit\
				\n\t4.Delete at Begining\
				\n\t5.Delete at Middle\
				\n\t6.Delete at End\
				\n\t7.Display\
                \n\t8.Print Reverse\
                \n\t9.Reverse Linklist\
				\n\t Enter Your Choise ";
		cin >> ch;

		switch (ch)
		{
		case 1:
			cout << "\n\n\t Enter Data ";
			cin >> data;
			list1.AddBeg(data);
			break;
		case 2:
			cout << "\n\n\t Enter Position and Data ";
			cin >> pos >> data;
			list1.AddMid(pos, data);
			break;
		case 3:
			cout << "\n\n\t Enter Data ";
			cin >> data;
			list1.AddEnd(data);
			break;
		case 4:
			list1.deleteBeg();
			break;
		case 5:
			cout << "\n\n\t Enter Position to Delete Data ";
			cin >> pos;
			list1.deleteMid(pos);
			break;
		case 6:
			list1.deleteEnd();
			break;
		case 7:
			list1.Display();
			break;
		case 8:
			list1.printReverse();
			break;
		case 9:
			list1.reverseLinklist();
			break;
		default:
			break;
		}
	} while (ch != 0);

	cout << "\n\n\n";
}