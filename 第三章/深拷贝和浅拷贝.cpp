//�����ǳ����(��ϵͳĬ�ϵĿ�������ֻ��ʵ��ǳ����������ʱ����)
#include<string>
#include<iostream>
#include<windows.h>
using namespace std;
class student
{
	char *specialty;
public:
	student(char *pspec = 0);//���캯������
	~student();//��������
		void show();
};
student::student(char *pspec)
{
	if (pspec)
	{
		specialty = new char(strlen(pspec) + 1);
		strcpy(specialty, pspec);
	}
	else specialty = 0;
}
student::~student()//����������ʵ�֣��õ����ͷ���ռ���ڴ���Դ��
{
	if (specialty)
		delete[]specialty;//specialty���ڴ�ռ�����������䣬��Ҫ��delete�ͷ�
}
void student::show()
{
	cout << "specialty=" << specialty << '\n';

}
int main()
{
	student zhang("computer");
	student wang(zhang);
	zhang.show();
	wang.show();
	system("pause");
	return 0;
}
