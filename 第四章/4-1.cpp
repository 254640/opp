#define _CRT_SECURE_NO_WARNINGS
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
	~student(){ total -- ; };//����������ÿһ������������ڽ���ʱ��total��1
	student(int n, char *p = "wang");
	void Getname();
	int Getnum();
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
int main()
{
	cout << "The number of all students:" << student::total << endl;
	student *p = new student(13);
	cout << "The number of all students:" << student::total << endl;
	cout << "The number of all students:" << p->total << endl;
	delete p;
	cout << "The number of all students:" << student::total << endl;
	student s[2];
	cout << "The number of all students:" << s[0].total << endl;
	cout << "The number of all students:" << s[1].total << endl;
	system("pause");
	return 0;
}