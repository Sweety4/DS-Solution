#include"linklist.h"
int main()
{
	Linklist list1;
	int no;
	cout << "\n\n\t Enter Number of node for linklist ";
	cin >> no;
	list1.createLinklist(no);
	list1.Display();
	cout << "\n\n\t";

}