#include"3.21.h"
Date &Fun(Date &pDate)
{
	pDate.ModifyDate(2012, 5, 1);//修改引用作为普通函数Fun()的形式参数
	cout << "reference pDate:\n";
	return pDate;
}
int main()
{
	Date DateA(2011), tDate;
	cout << "Before right Fun,DateA:\n";
	DateA.Display();
	cout << "Before right Fun,tDate:\n";
	tDate.Display();
	tDate = Fun(DateA);//Fun作为左值被调用
	cout << "After right Fun,DateA:\n";
	DateA.Display();
	cout << "After right Fun,tDate:\n";
	tDate.Display();
	Fun(DateA) = Date(1998, 10, 5);//Fun作为左值被调用
	cout << "After left Fun,DateA:\n";
	DateA.Display();
	cout << " After left Fun, tDate:\n";
	tDate.Display();
	system("pause");
	return 0;
}