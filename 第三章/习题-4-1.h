#include<iostream>
#include<windows.h>
using namespace std;
class student
{
private:
	int age;
	char *name;
public:
	student(int m, char *n);//�������Ĺ��캯��
	student();//���������Ĺ��캯��
	void SetName(int m, char *n);
	int Getage();
	char *Getname();
	void Display();
};
student::student(int m, char *n)
{
	age = m;
	name = n;
}
student::student()
{
	age = 18;
	name = "С��";
	
}
void student::SetName(int m, char *n)
{
	m = age;
	n = name;
}
int student::Getage()
{
	return age;
}
char *student::Getname()
{
	return name;
}
void student::Display()
{
	cout << age << "-" << name << endl;
}
