#include"��������.h"
	Date DateA(2010, 1, 1), DateB(2010, 5, 1);//�������ι��캯��������������
	Date &pDate = DateA;//����pDate��ʼ������Date�ı����������ù��캯��
void f()//�����������DateA��DateB������pDate��ֵ
{
    DateA.Display();
	DateB.Display();
	pDate.Display();
}
int main()
{
	cout << "original DateA,DateB,pDate:" << endl;
	f();
	pDate = DateB;//�൱��DateA=DateB��pDate����Date�ı���
	cout << "after pDate=DateB,DateA,DateB,pDate:" << endl;
	f();//�˴��������DateA��DateB��pDate��ֵ�����޸��൱��DateA=Date(2010,10,1);
	cout << "after  pDate=Date(2010,10,1),DateA,DateB,pDate:" << endl;
	f();//�˴������DateA��pDateһ�����
	system("pause");
	return 0;
}

