#include<iostream>
#include<windows.h>
using namespace std;
class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date(int y = 2007, int m = 1, int d = 1);
	Date(const Date &date);//�������캯��������
	int GetYear();
	int GetMonth();
	int GetDay();
	void Display();
	~Date();//������������
	void ModifyDate(int, int, int);//�޸����ڵĺ���
};
Date::~Date()
{
	cout << "Destructor called.\n";
}
Date::Date(int y, int m, int d)//���캯��
{
	year = y;
	month = m;
	day = d;
	cout << "Constructor called.\n";
}
Date::Date(const Date &date)//�������캯���Ķ���
{
	year = date.year;
	month = date.month;
	day = date.day;
	cout << "Copy Construct called.\n";
}
int Date::GetDay()
{
	return day;
}
int Date::GetMonth()
{
	return month;
}
int Date::GetYear()
{
	return year;
}
void Date::ModifyDate(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
void Date::Display()
{
	cout << year << "-" << month << "-" << day << endl;
}