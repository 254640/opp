#include"对象参数.h"
void Fun(Date DateVar)
{
	DateVar.ModifyDate(2011, 11, 1);
	DateVar.Display();
}
int main()
{
	Date DateA;
	DateA.Display();
	Fun(DateA);//实参对象单向传值给形参对象，调用拷贝构造函数
	cout << "after calling fun() Date:";
	DateA.Display();
	system("pause");
	return 0;
}