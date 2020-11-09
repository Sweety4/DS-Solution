#include"linklist.h"

void main()
{
	int ch, no, data, pos;
	cLinkedList list1;

	cout << "\n\n\t Enter Terms: ";
	cin >> no;

	list1.createLinkedList(no);
	do
	{
		cout << "\n\t1.Add at Begining\t5. Delete Beg\
				\n\t2.Add at Middle\t\t6. Delete Mid\
				\n\t3.Add at End\t\t7. Delete End\
				\n\t4. Display\
				\n\t0. Exit\
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
		case 5:
			list1.deleteBeg();
			break;
		case 6:
			cout << "\n\n\t Enter Position to Delete Data ";
			cin >> pos;
			list1.deleteMid(pos);
			break;
		case 7:
			list1.deleteEnd();
			break;
		case 4:
			list1.Display();
			break;
		default:
			break;
		}
	} while (ch != 0);

	cout << "\n\n\n";
}