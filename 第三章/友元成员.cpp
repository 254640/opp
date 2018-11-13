#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
class Student;//向前引用，因为在后面的Date类中用到student类型
class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date(int y = 2007, int m = 1, int d = 1);
	void Display(const Student &stu);//成员函数，其形式参数为类student的对象引用
};
class Student
{
private:
	char *specialty;
public:
	Student(char *pspec);
	~Student();
	friend void Date::Display(const Student &);//此为申明友元成员语句，Date::不可少

};
Date::Date(int y, int m, int d)//普通函数定义
{
	year = y;
	month = m;
	day = d;
	cout << "contructor called.\n";
}
void Date::Display(const Student &stu)//Display是Date的成员函数，student类的友元函数
{
	cout << stu.specialty << endl;//显示学生对象的专业名称
	cout << year<<"-" << month << "-" << day << endl;
}
Student::Student(char *pSpec)
{
	if(pSpec)
	{
		specialty = new char[strlen(pSpec) + 1];
		strcpy(specialty, pSpec);
	}
	else specialty = 0;
}
Student::~Student()
{
	if (specialty)
		delete[]specialty;
}
int main()
{
	Student zhang("computer");
	Date Birthday(1990, 10, 17);
	Birthday.Display(zhang);
	system("pause");
	return 0;
}
