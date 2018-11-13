//引用
/*
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int a = 2;
	int* p = &a;//p是指向a的地址
	int &ra = a;//ra是a的引用（申明引用）
	cout << "a的别名ra=" << ra << endl;
	a = 230;
	cout << "a的别名ra=" << ra<<endl;
	cout << "a的地址:" << &a<<endl;
	cout << "p的地址:" << &p<<endl;
	cout << "ra的地址:" << &ra << endl;
	system("pause");
	return 0;
}*/
//引用做形参
#include<iostream>
#include<windows.h>
using namespace std;
//无用功
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
	cout << "交换前a和b的值:" << a << " " << b << endl;
	cout << "交换后a和b的值:" << a << " " << b << endl;
	swap_1(a, b);


	 a = 22;
	 b = 55;
	cout << "交换前a和b的值:" << a << " " << b << endl;
	cout << "交换后a和b的值:" << a << " " << b << endl;
	swap_2(&a, &b);


	cout << "交换前a和b的值:" << a << " " << b << endl;
	cout << "交换后a和b的值:" << a << " " << b << endl;
	swap_3(a, b);
	system("pause");
	return 0;
}
