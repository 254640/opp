#include"对象指针做参数.h"
void Fun(Date *pDate)//对象指针作为普通函数
{
	pDate->ModifyDate(2011, 11, 1);//修改指针所指向对象的值
	pDate->Display();
}
int main()
{
	Date DateA(2011);
	DateA.Display();//输出对象的值
	Fun(&DateA);
	cout << "after calling fun() DateA:";
	DateA.Display();
	system("pause");
	return 0;
}