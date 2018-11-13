#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
class point
{
private:
	double x;
	double y;
public:
	point(double a, double b);//���캯��
	double GetX();//��ȡ������
	double GetY();//��ȡ������
	friend double GetLength(point &A, point &B);//��Ԫ����
};
point::point(double a, double b)
{
	x = a;
	y = b;
}
double point::GetX()
{
	return x;
}
double point::GetY()
{
	return y;
}
double GetLength(point &A, point &B)
{
	double d = sqrt((A.x - B.x)*(A.x - B.x) + (A.y - B.y)*(A.y - B.y));
	return d;
}