#include<iostream>
using namespace std;
class circle
{
private:
	double radius;//����Բ�İ뾶
	const double PI;//����һ�������ݳ�Ա
public:
	circle(double r = 0) :PI(3.1415926)//ֻ��ͨ����ʼ���б��ʼ�������ݳ�Ա
	{
		radius = r;
	}
	double area();//��Բ�����
	double circumference();//��Բ���ܳ�
	double GetRadius()const;//����Ա��������ȡ�뾶ֵ
};