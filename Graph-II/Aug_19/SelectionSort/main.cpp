
#include<iostream>
using namespace std;

int i, j;
void Accept(int a[], int sz)
{
	cout << "\n\n\t Enter " << sz << " Elements ";
	for (i = 0; i < sz; i++)
		cin >> a[i];
}
void Display(int a[], int sz)
{
	cout << "\n\n\t ********** Array Is *********** \n\n";
	for (i = 0; i < sz; i++)
		cout << "  " << a[i];
}
void Sort(int a[], int sz)
{
	int index, min;
	for (i = 0; i < sz - 1; i++)
	{
		index = i;
		min = a[i];
		for (j = i + 1; j < sz - 1; j++)
		{
			if (a[j] < min)
			{
				min=a[j];
				index = j;
			}
		}
		a[index] = a[i];
		a[i] = min;
	}
}
void main()
{
	int arr[10], ele;
	Accept(arr, 10);
	Display(arr, 10);
	Sort(arr, 10);
	Display(arr, 10);

	cout << "\n\n\n";


}