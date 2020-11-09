
#include"stack.h"

void main()
{
	char infix[20], pre[30];
	cout << "\n\n\t Enter Infix Expression ";
	cin >> infix;
	Convert_Infix_Pre(infix, pre);
	cout << "\n\n\t PostFix : " << pre;
	cout << "\n\n\n";

}