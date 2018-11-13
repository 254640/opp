#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
class student;
class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date(int, int, int);
	void Display();
	friend student;//类studet作为Date的友元类
};
class student
{
private:
	char *specialty;
	char *name;
public:
	student(char *pn, char *pspec);
	~student();
	void Display(Date&);
};
Date::Date(int y, int m, int d) :year(y), month(m), day(d)
{ }
void Date::Display()
{
	cout << year << "-" << month << "-" << day << endl;
}
student::student(char *pn, char *pspec)
{
	if (pspec)
	{
		specialty = new char[strlen(pspec) + 1];
		strcpy(specialty, pspec);
	}
	else
		specialty = 0;
	if (pn)
	{
		name = new char[strlen(pn) + 1];
		strcpy(name, pn);
	}
	else
		name = 0;
}
student::~student()
{
	if (specialty)
		delete[]specialty;
	if (name)
		delete[]name;
}
void student::Display(Date &obj)
{
	cout << name << endl;
	cout << specialty << endl;
	obj.Display();
	cout << "Date's another formate is:";
	cout << obj.month << "_" << obj.day << "_" << obj.year << endl;
}
int main()
{
	student boy("zhang","computer");
	Date birthday(1990, 10, 17);
	boy.Display(birthday);
	system("pause");
	return 0;
}