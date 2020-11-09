#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void Accept(char[][20], int);
void Display(char[][20], int);
int Search(char[][20], int, char[]);

void main()
{
	char  st[20], str[10][20];
	int res;

	Accept(str, 10);
	cout << "\n\n\t Enter STring To Search ";
	cin >> st;
	Display(str, 10);
	
	res=Search(str, 10, st);
	if (res == -1)
		cout << "\n\n\t String Not Found ";
	else
		cout << "\n\n\t String Found At " << res << "  Index ";
	cout << "\n\n\n";

}
int i;
void Accept(char s[][20], int sz)
{
	cout << "\n\n\t Enter " << sz << " String ";
	for (i = 0; i < sz; i++)
	{
		cin >> s[i];
	}
}
void Display(char s[][20], int sz)
{
	cout << "\n\n\t ***** String Are ******";
	for (i = 0; i < sz; i++)
		cout << "\n\t\t"<<s[i];
}
int Search(char  str[][20], int sz,  char key[])
{
	int index = -1,res;
	for (i = 0; i < sz; i++)
	{
		if ((res=strcmp(str[i], key)) ==0)
		{
			index = i;
			break;

		}
	}
	return index;
}