#include"对象引用做参数.h"
void Fun(Date &pDate)//对象指针作为普通函数Fun()的形式参数；
{
	pDate.ModifyDate(2011, 11, 1);//修改指针所指向的对象的值
	pDate.Display();
}
int main()
{
	Date DateA(2010);
	DateA.Display();//输出对象的值
	Fun(DateA);//实参对象地址单向传给形参对象指针
	cout << "after calling fun() DateA:";
	DateA.Display();//实参对象的值已经改变
	system("pause");
	return 0;
}