#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void main()
{
	char str[5][20], temp[20];
	int i, j, res;
	cout << "\n\n\t Enter 5 String ";
	for (i = 0; i < 5; i++)
		cin >> str[i];
	cout << "\n\n\t Array Is ";
	for (i = 0; i < 5; i++)
		cout << " \n\t  " << str[i];

	for (i = 0; i < 5 - 1; i++)
	{
		for (j = 0; j < 5 - 1 - i; j++)
		{
			res = strcmp(str[j], str[j + 1]);
			if (res > 0)
			{
				strcpy(temp, str[j]);
				strcpy(str[j], str[j + 1]);
				strcpy(str[j + 1], temp);
			}
		}
	}
	cout << "\n\n\t Array Is ";
	for (i = 0; i < 5; i++)
		cout << "\n\t   " << str[i];



}