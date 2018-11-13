//#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class student
{
private:
	int num;
	char name[20];
public:
	static int total;//公有静态数据成员
	student(){ total++; };//构造函数，每定义一个新对象，total加一
	~student(){ total--; };//析构函数，每一个对象的生命期结束时，total减1
	student(int n, char *p = "wang");
	void Getname();
	int Getnum();
	static void print();//声明一个公有的静态成员函数
};
int student::total = 0;
student::student(int n, char *p)//带参构造函数，每定义一个新对象，total+1
{
	num = n;
	strcpy(name, p);
	total++;
}
void student::Getname()
{
	cout << name << endl;
}
int student::Getnum()
{
	return num;
}
void student::print()
{
	cout << "The number of all students:" << total;
}
int main()
{
	student::print();
	//cout << "The number of all students:" << student::total << endl;
	student *p = new student(13);
	student::print();
	p->print();
	delete p;
	student::print();
	student s[2];
	student::print();
	cout<<endl;
	student::print();
	cout<<endl;
	//s[0].print();
	//s[1].print();
	system("pause");
	return 0;
}
