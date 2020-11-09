#include"queue.h"

cQueue::cQueue()
{
	size = 5;
	arr = new Employee[size];
	rear = -1;
	front = -1;
}
cQueue::cQueue(int sz)
{
	size = sz;
	arr = new Employee[size];
	rear = -1;
	front = -1;
}

void cQueue::EnQueue(Employee Ele)
{
	if (!IsFull())
	{
		this->arr[++rear] = Ele;
	}
	else
	{
		printf("\nqueue is full");

	}
}

Employee  cQueue::DeQueue()
{
	if (!IsEmpty())
	{
		return (arr[++(front)]);
	}
	
}

int  cQueue::IsEmpty()
{
	if (rear == front)
		return 1;
	else
		return 0;

}

int  cQueue::IsFull()
{
	if (rear == size - 1)
		return 1;
	else
		return 0;
}

void cQueue::Display()
{
	int i;
	cout << "\n\n\t **** Queue Is ***** \n\n";
	if (!IsEmpty())
	{
		for (i = front + 1; i <= rear; i++)
			cout << "     " << arr[i];
	}
	else
	{
		printf("\n Queue is empty");
	}
}