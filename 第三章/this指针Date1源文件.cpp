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
	void SetDate(int y, int m, int d);
	void Display();
};
void Date::SetDate(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
void Date::Display()
{
	cout << "���û������Ķ����thisָ����";//�����ǰ��������ĵ�ַ
	cout << this << endl;
	cout << "��ǰ����year��Ա����ʼָ��: ";//�����ǰ�����year��Ա�ĵ�ַ
	cout << &this->year << endl;
	cout << "��ǰ����month��Ա����ʼ��ַ: ";//�����ǰ�����month��Ա�ĵ�ַ
	cout << &this->month << endl;
	cout << "year=" << this->year << ",month=" << this->month << endl;//���this��ָ��������ݳ�Աֵ
}
int main()
{
	Date DateA, DateB;
	DateA.SetDate(2011, 7, 24);
	DateB.SetDate(2010, 10, 1);//������������
	cout << "DateA ��ַ:" << &DateA << endl;//�������DateA�ĵ�ַ
	DateA.Display();
	cout << "DateB��ַ:" << &DateB << endl;
	DateB.Display();
	system("pause");
	return 0;


}