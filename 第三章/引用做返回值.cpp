#include"����������ֵ.h"
Date &Fun(Date &pDate)//����������Ϊ��ͨ����Fun��()����ʽ����
{
	pDate.ModifyDate(2012, 5, 1);//�޸����õ�ֵ��Ҳ�����޸��˶�Ӧʵ�ζ����ֵ
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
	tDate = Fun(DateA);//Fun��Ϊ��ֵ������
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