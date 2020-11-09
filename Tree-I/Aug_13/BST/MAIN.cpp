#include"tree.h"

void main()
{
	int ch, data;
	cTree t1;
	do
	{
		cout << "\n\n\t\t1. Add Node \
                 \n\t\t2. Display\
                 \n\t\t0. Exit\
                 \n\t Enter Your chocie ";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "\n\n\t Enter Element To Insert ";
			cin >> data;
			t1.AddNode(data);
			break;
		case 2:
			t1.Display();
			break;
		}
	} while (ch != 0);

	cout << "\n\n\n";
}


