#include"emp.h"
Employee::Employee()
{
	id = 0;
	strcpy(name, "  ");
}
Employee::Employee(int i, const char *nm)
{
	id = i;
	strcpy(name, nm);
}
void Employee::Accept()
{
	//cout << "\n\n\t Ener Id and Name ";
	cin >> id >> name;
}
void Employee::Display()
{
	cout << "\n\n\t" << id << "\t" << name;
}
ostream& operator<<(ostream &out, Employee &e)
{
	out << "\n\n\t" << e.id << "\t" << e.name;
	return out;

 }
istream& operator>>(istream &in, Employee &e)
{
	cout << "\n\n\t Ener Id and Name ";
	in >> e.id >> e.name;
	return in;
 }