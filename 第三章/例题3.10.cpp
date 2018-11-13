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
	Date initiateday;//定义对象但不提供实际参数；
	Date newday(2006);//只提供1个实际参数，其余的采用默认值
	Date today(2006, 10, 17);
	initiateday.Display();
	cout << "Newday is:";
	newday.Display();
	cout << "Today is:";
	today.Display();
	system("pause");
	return 0;
}