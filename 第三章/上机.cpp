//����
/*
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int a = 2;
	int* p = &a;//p��ָ��a�ĵ�ַ
	int &ra = a;//ra��a�����ã��������ã�
	cout << "a�ı���ra=" << ra << endl;
	a = 230;
	cout << "a�ı���ra=" << ra<<endl;
	cout << "a�ĵ�ַ:" << &a<<endl;
	cout << "p�ĵ�ַ:" << &p<<endl;
	cout << "ra�ĵ�ַ:" << &ra << endl;
	system("pause");
	return 0;
}*/
//�������β�
#include<iostream>
#include<windows.h>
using namespace std;
//���ù�
void swap_1(int x,int y)
{
	int t;
	t = x;
	x = y;
	y = t;
	
}
void swap_2(int *x, int *y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}
void swap_3(int& x, int& y)
{
	int t;
	t = x;
	x = y;
	y = t;

}
int main()
{
	int a = 22;
	int b = 55;
	cout << "����ǰa��b��ֵ:" << a << " " << b << endl;
	cout << "������a��b��ֵ:" << a << " " << b << endl;
	swap_1(a, b);


	 a = 22;
	 b = 55;
	cout << "����ǰa��b��ֵ:" << a << " " << b << endl;
	cout << "������a��b��ֵ:" << a << " " << b << endl;
	swap_2(&a, &b);


	cout << "����ǰa��b��ֵ:" << a << " " << b << endl;
	cout << "������a��b��ֵ:" << a << " " << b << endl;
	swap_3(a, b);
	system("pause");
	return 0;
}
