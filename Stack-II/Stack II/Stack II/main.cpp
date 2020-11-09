
#include"stck.h"

void main()
{
	char infix[20], postfix[30];
	cout << "\n\n\t Enter Infix Expression ";
	cin >> infix;
	Convert_Infix_Post(infix, postfix);
	cout << "\n\n\t PostFix : " << postfix;
	cout << "\n\n\n";

}