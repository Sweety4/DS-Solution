#include"Stack.h"

int main()
{
	cStack s;

	int ch;
	Book value;

	do
	{
		cout << "\n*********Menu*****";
		cout << "\n 1: PUSH\
			    \n 2: POP\
			    \n 3: Display\
			    \n 0: EXIT";
		cout << "\nEnter your choice";
		cin >> ch;

		switch (ch)
		{
		case 1:
			cout << "\nEnter value to push: ";
			cin >> value;
			s.Push(value);
			break;
		case 2:
			value = s.Pop();
			cout << "\n\tpopped: " << value;
			break;
		case 3:
			cout << "\n\n*********STACK**********\n";
			s.Display();
			cout << "\n***********************\n";
			break;
		case 0:
			break;
		}

	} while (ch != 0);

	return 0;
}