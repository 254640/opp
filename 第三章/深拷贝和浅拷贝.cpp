//深拷贝和浅拷贝(用系统默认的拷贝函数只能实现浅拷贝，析构时出错)
#include<string>
#include<iostream>
#include<windows.h>
using namespace std;
class student
{
	char *specialty;
public:
	student(char *pspec = 0);//构造函数声明
	~student();//析构函数
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
student::~student()//析构函数的实现（用的来释放所占的内存资源）
{
	if (specialty)
		delete[]specialty;//specialty的内存空间由运算符分配，需要用delete释放
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
