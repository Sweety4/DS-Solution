#include"pgraph.h"
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	cGraph g(3);
	int no;
	int ch;
	do
	{
		cout << "\n\n\t\t1. Accept\
                 \n\t\t2. Display\
                 \n\t\t3. InDegree\
                 \n\t\t4. Out Degree\
                 \n\t\t5. DSF\
                 \n\t\t6. DFS\
                 \n\t\t0. Exit\
                 \n\t Enter Your Choice ";
		cin >> ch;
		switch (ch)
		{
		case 1:
			g.Accept();
			break;
		case 2:

			g.Display();
			break;
		case 3:
			g.InDegree();
			break;
		case 4:
			g.OutDegree();
			break;
		case 5:
			cout << "\n\n\t Enter Starting Node ";
			cin >> no;
			g.DFS(no);
			break;
		case 6:
			cout << "\n\n\t Enter Starting Node ";
			cin >> no;
			g.BFS(no);
			break;

		}
	} while (ch != 0);
	cout << "\n\n\n\n";
	return 0;
}
