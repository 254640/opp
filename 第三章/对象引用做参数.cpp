#include"��������������.h"
void Fun(Date &pDate)//����ָ����Ϊ��ͨ����Fun()����ʽ������
{
	pDate.ModifyDate(2011, 11, 1);//�޸�ָ����ָ��Ķ����ֵ
	pDate.Display();
}
int main()
{
	Date DateA(2010);
	DateA.Display();//��������ֵ
	Fun(DateA);//ʵ�ζ����ַ���򴫸��βζ���ָ��
	cout << "after calling fun() DateA:";
	DateA.Display();//ʵ�ζ����ֵ�Ѿ��ı�
	system("pause");
	return 0;
}