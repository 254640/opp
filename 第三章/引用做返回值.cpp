#include"引用做返回值.h"
Date &Fun(Date &pDate)//对象引用作为普通函数Fun的()的形式参数
{
	pDate.ModifyDate(2012, 5, 1);//修改引用的值，也就是修改了对应实参对象的值
	cout << "reference pDate:\n";
	pDate.Display();
	return pDate;
}
int main()
{
	Date DateA(2011), tDate;
	cout << "Before right Fun,DateA:\n";
	DateA.Display();
	cout << "Before right Fun,tDate:\n";
	tDate.Display();
	tDate = Fun(DateA);//Fun作为右值被调用
	cout << "After right Fun,Date:\n";
	DateA.Display();
	cout << "After right Fun,tDate:\n";
	tDate.Display();
	Fun(DateA) = Date(1998, 10, 5);
	cout << "After left Fun,DateA:\n";
		DateA.Display();
		cout << "After left Fun,tDate:\n";
		tDate.Display();
		system("pause");
		return 0;
}