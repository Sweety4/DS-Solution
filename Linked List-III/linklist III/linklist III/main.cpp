#include"linklist.h"

int main()
{
	Linklist Dlist1;
	int no;

	cout << "\n\n\t Enter No of Nodes To Insert in Linklist ";
	cin >> no;

	Dlist1.CreateLinklist(no);

	int ch, ele, pos;

	do
	{
		cout << "\n\n*****************************************\n";
		cout << "\n\t1:Insert (position)\
			\n\t2:Delete\
			\n\t3 : Display\
			\n\t4 : Modify\
			\n\t5 : Print Reverse\
			\n\t6 : Sort\
			\n0 : EXIT";
			cout << "\nEnter your choice::   ";
		cin >> ch;
		cout << "\n\n";
		switch (ch)
		{
		case 1:
			cout << "\n\t Enter Data  and Potision to insert data  ";
			cin >> ele >> pos;
			Dlist1.Insert(ele, pos);
			break;
		case 4:
			cout << "\n\n\t Enter Data to modify ";
			cin >> ele;
			//Dlist1.Modify(ele);
			break;
		case 2:
			cout << "\n\n\t Enter Data to Delete ";
			cin >> ele;
			Dlist1.Delete(ele);
			break;
		case 3:
			Dlist1.Display();
			//cout << s;
			break;
		case 6:
			Dlist1.Sort();
			break;
		case 5:
			Dlist1.PrintReverse();
			break;
		default:
			cout << "\n\t*******WRONG INPUT************\n\n";
		}
	} while (ch != 0);

	return 0;
}