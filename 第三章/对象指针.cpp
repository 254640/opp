#include"����ָ��.h"
int main()
{
	Date *q = new Date(2010, 4, 1);//����һ������Ķ�̬�ռ䣬�����׵�ַ��������ָ��q
	cout << "one dynamic object is:" << endl;
	delete q;//�ͷ�q����Ķ�̬�ռ䣬����һ����������
	q->Display();
	delete q;
	q = new Date[3];
	q[0] = Date(2011, 5, 1);//�����в����Ĺ��캯��������������ֵ��q[0]
	q[1] = Date(2011, 10, 1);//�����вκ���������������ֵ��q[1];
	for (int i = 0; i < 3; i++)//��ʱ��ָ��q�൱��һά��������������������ʹ��
		q[i].Display();
	delete[]q;//�ͷŶ�������Ŀռ䣬����������������
	system("pause");
	return 0;
}