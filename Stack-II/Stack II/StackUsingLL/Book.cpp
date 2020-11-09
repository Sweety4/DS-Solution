#include"book.h"
Book::Book()
{
	id = 1;
	strcpy(name, " ");
}
Book::Book(int i, const char *nm)
{
	id = i;
	strcpy(name, nm);
}
ostream& operator<<(ostream &out, Book &b)
{
	out << "\n\t" << b.id << b.name;
	return out;
 }
void Book::Display()
{
	cout << "\n\n\t" << id << "\t" << name;
}
istream& operator>>(istream &in, Book &b)
{
	cout << "\n\t Enter Id and Name ";
	in >> b.id >> b.name;
	return in;
}
