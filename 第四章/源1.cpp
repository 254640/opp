#include"��4-4.h"
double circle::area()//��Բ�����
{
	return PI*radius*radius;
}
double circle::circumference()//��Բ���ܳ�
{
	return 2 * PI*radius;
}
double circle::GetRadius()const
{
	return radius;
}