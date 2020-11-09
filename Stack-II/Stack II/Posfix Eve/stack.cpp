#include"stack.h"

cStack::cStack()
{
	size = 5;
	top = -1;
	arr = new int[size];;
}
cStack::cStack(int sz)
{
	size = sz;
	top = -1;
	arr = new int[sz];
}
int cStack::IsFull()
{
	if (top == (size - 1))
		return 1;
	else
		return 0;
}

int cStack::IsEmpty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}

void cStack::Push(int value)
{
	if (IsFull() == 0)
	{
		arr[++top] = value;
	}
	else
		cout << "\n\tERROR: STACK is FULL....";
}

int cStack::Pop()
{
	char value = -9999;
	if (IsEmpty() == 0)
	{
		value = arr[top--];
	}
	return value;
}
int cStack::Peek()
{
	int value = -9999;
	if (IsEmpty() == 0)
	{
		value = arr[top];
	}
	return value;
}

cStack::~cStack()
{
	if (arr != NULL)
	{
		delete[]arr;
	}
	arr = NULL;
}
int IsOperand(char ch)
{
	if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122) || (ch >= 48 && ch <= 57))
		return 1;
	else
		return 0;
}
int Priority(char ope)
{
	int Flag = 0;
	switch (ope)
	{
	case '-':
	case '+':
		Flag = 1;
		break;

	case '/':
	case '*':
	case '%':
		Flag = 2;
		break;

	case '$':
		Flag = 3;
		break;

	}
	return Flag;
}
int Calculate(char ch, int n1, int n2)
{
	switch(ch)
	{
	case '+':
		return n1 + n2;
	case '-':
		return n1 - n2;
	case'*':
		return n1 * n2;
	case '/':
		return n1 / n2;
	case '%':
		return n1 % n2;
	}
}
int Postfix_Eva( char *post)
{
	cStack st(strlen(post) + 1);
	int no1, no2, res;

	for (int i = 0, j = 0; post[i] != '\0'; i++)
	{
		if (post[i] >= '0' && post[i] <= '9')
			st.Push((int)post[i]);
		else
		{
			no2 = st.Pop();
			no1 = st.Pop();
			res = Calculate(post[i], no1, no2);
			st.Push(res);
		}
	}
	return st.Pop();;
}

