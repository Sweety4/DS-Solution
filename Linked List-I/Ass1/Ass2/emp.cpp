#include"emp.h"

Employee::Employee()
{
	id = 1;
	strcpy(name, " ");
}
Employee::Employee(int i, const char *nm)
{
	id = i;
	strcpy(name, nm);
}
void Employee::Accept()
{
	cout << "\n\n\t Enter Id and Name ";
	cin >> id >> name;
}
void Employee::Display()
{
	cout << "\n\t" << id << "\t" << name;
}

 ostream& operator<<(ostream &out, Employee &e)
{
	 out << "\n\t" << e.id << "\t" << e.name;
	 return out;
}
 istream& operator>>(istream &in, Employee &e)
{
	 cout << "\n\n\t Enter Id and Name ";
	 in >> e.id >> e.name;
	 return in;
 }
