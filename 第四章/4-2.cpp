//#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class student
{
private:
	int num;
	char name[20];
public:
	static int total;//���о�̬���ݳ�Ա
	student(){ total++; };//���캯����ÿ����һ���¶���total��һ
	~student(){ total--; };//����������ÿһ������������ڽ���ʱ��total��1
	student(int n, char *p = "wang");
	void Getname();
	int Getnum();
	static void print();//����һ�����еľ�̬��Ա����
};
int student::total = 0;
student::student(int n, char *p)//���ι��캯����ÿ����һ���¶���total+1
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
