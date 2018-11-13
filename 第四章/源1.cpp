#include"例4-4.h"
double circle::area()//求圆的面积
{
	return PI*radius*radius;
}
double circle::circumference()//求圆的周长
{
	return 2 * PI*radius;
}
double circle::GetRadius()const
{
	return radius;
}