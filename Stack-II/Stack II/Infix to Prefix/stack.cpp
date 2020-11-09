#include"stack.h"

cStack::cStack()
{
	size = 5;
	top = -1;
	arr = new char[size];;
}
cStack::cStack(int sz)
{
	size = sz;
	top = -1;
	arr = new char[sz];
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

void cStack::Push(char value)
{
	if (IsFull() == 0)
	{
		arr[++top] = value;
	}
	else
		cout << "\n\tERROR: STACK is FULL....";
}
void Reverse(char *s)
{
	char *t = s,temp;
	while (*t != '\0')
		t++;
	t--;
	while (s < t)
	{
		temp=*s;
		*s = *t;
		*t = temp;
		s++;
		t--;
	}
}
char cStack::Pop()
{
	char value = -9999;
	if (IsEmpty() == 0)
	{
		value = arr[top--];
	}
	return value;
}
char cStack::Peek()
{
	int value = -9999;
	if (IsEmpty() == 0)
	{
		value = arr[top];
	}
	return value;
}

/*int Stack::Pop()
{
int value=-999;
if(isEmpty()==0)
{
value = stk[top];
top--;
}
return value;
}*/

void cStack::Display()
{
	int i;
	if (!IsEmpty())
	{
		for (i = top; i>-1; i--)
			cout << "\n\t" << arr[i];
	}
	else
		cout << "\n\tERROR: STACK is EMPTY....";
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
int IsOperator(char ch)
{
	if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || \
		ch == '%' || ch == '$' || ch == '(' || ch == ')')
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

void Convert_Infix_Pre( char * Infix, char * prefix)
{
	cStack st(strlen(Infix) + 1);
	int i, j;
	char x;
	//Step : 1 
	      // Reverse the Infix Expression
	Reverse(Infix);
	//Step : 2
	      //Exchange Brackets 
	for (int i = 0; Infix[i] != '\0'; i++)
	{
		if (Infix[i] == '(')
			Infix[i] = ')';
		else if (Infix[i] == ')')
			Infix[i] = '(';
	}
	//Step 3: 
	     // Conver it into Postfix
	for (i = 0, j = 0; Infix[i] != '\0'; i++)
	{
		if (IsOperand(Infix[i]))
			prefix[j++] = Infix[i];
		else if (Infix[i] == '(')
			st.Push(Infix[i]);
		else if (Infix[i] == ')')
		{
			while ((x = st.Pop()) != '(')
			{
				prefix[j++] = x;
			}
		}
		else if (st.IsEmpty() == 0 && Priority(Infix[i]) <= Priority(st.Peek()))
		{
			while (st.IsEmpty() == 0 && Priority(Infix[i]) <= Priority(st.Peek()))
				prefix[j++] = st.Pop();
			st.Push(Infix[i]);
		}
		else
			st.Push(Infix[i]);
	}
	while (st.IsEmpty() == 0)
	{
		x = st.Pop();
		prefix[j++] = x;
	}

	prefix[j] = '\0';
	// Step : 4
	  //Reverse the answer 
	Reverse(prefix);
}

