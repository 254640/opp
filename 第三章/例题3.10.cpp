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
	Date(int y = 2000, int m = 1, int d = 1);
	void Display();
};
Date::Date(int y, int  m, int d)
{
	cout << "Executing construct..." << endl;
	year = y;
	month = m;
	day = d;
}
void Date::Display()
{
	cout << year << "-" << month << "-" << day << endl;
}
int main()
{
	Date initiateday;//������󵫲��ṩʵ�ʲ�����
	Date newday(2006);//ֻ�ṩ1��ʵ�ʲ���������Ĳ���Ĭ��ֵ
	Date today(2006, 10, 17);
	initiateday.Display();
	cout << "Newday is:";
	newday.Display();
	cout << "Today is:";
	today.Display();
	system("pause");
	return 0;
}