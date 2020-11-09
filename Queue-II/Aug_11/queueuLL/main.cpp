#include"queue.h"

void main()
{
	int Ch;
	int data;
	cQueue que;
	do {
		cout << "\n\t--------------------------------";
		cout << "\n\t  ********  MENU  ********";
		cout << "\n\t---------------------------------";
		cout << "\n\t 1.EnQueue";
		cout << "\n\t 2.DeQueue";
		cout << "\n\t 3.Display";
		cout << "\n\t 0. E.X.I.T.";
		cout << "\n\t---------------------------------";
		cout << "\n\t ENTER YOUR CHOICE :";
		cin >> Ch;
		switch (Ch)
		{
		case 1:
			cout << "\n\tEnter The Integer Element  :  ";
			cin >> data;
			que.EnQueue(data);
			break;
		case 2:
			data = que.DeQueue();
			if (data != ERROR)
				cout << "\n\t Removed from the Queue is " << data;
			else
				cout << "\n\t Queue is Empty";
			break;
		case 3:
			que.Display();
			break;
		default:
			cout << "\n\tWrong Option ";
			break;
		}
	} while (Ch != 0);
}