#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
class Student;//��ǰ���ã���Ϊ�ں����Date�����õ�student����
class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date(int y = 2007, int m = 1, int d = 1);
	void Display(const Student &stu);//��Ա����������ʽ����Ϊ��student�Ķ�������
};
class Student
{
private:
	char *specialty;
public:
	Student(char *pspec);
	~Student();
	friend void Date::Display(const Student &);//��Ϊ������Ԫ��Ա��䣬Date::������

};
Date::Date(int y, int m, int d)//��ͨ��������
{
	year = y;
	month = m;
	day = d;
	cout << "contructor called.\n";
}
void Date::Display(const Student &stu)//Display��Date�ĳ�Ա������student�����Ԫ����
{
	cout << stu.specialty << endl;//��ʾѧ�������רҵ����
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
