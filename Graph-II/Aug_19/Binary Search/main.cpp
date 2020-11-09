
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
int Search(int a[], int sz, int key)
{
	int index = -1;
	int lower, upper, mid;


	lower = 0;
	upper = sz - 1;
	for (mid = (lower + upper) / 2; lower <= upper; mid = (lower +upper) / 2)
	{
		if (a[mid] == key)
		{
			index = mid;
			break;
		}
		if (key < a[mid])
			upper = mid - 1;
		else
			lower = mid + 1;
	}
	return mid;
}


void main()
{
	int arr[10],ele;
	Accept(arr, 10);
	cout << "\n\n\t Enter Element to Search  ";
	cin >> ele;
	ele = Search(arr, 10, ele);
	if (ele == -1)
		cout << "\n\n\t Element Not Available ";
	else
		cout << "\n\n\t Availbale At " << ele << "  Position ";
	Display(arr, 10);
	

}