#include"�������.h"
void Fun(Date DateVar)
{
	DateVar.ModifyDate(2011, 11, 1);
	DateVar.Display();
}
int main()
{
	Date DateA;
	DateA.Display();
	Fun(DateA);//ʵ�ζ�����ֵ���βζ��󣬵��ÿ������캯��
	cout << "after calling fun() Date:";
	DateA.Display();
	system("pause");
	return 0;
}