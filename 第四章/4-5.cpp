//#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
class person
{
private:
	int age;
	char *name;
public:
	person(int i, char *na = "zhuli");//���캯��
	~person();
	void print();//���غ��������������ͨ��Ա����
	void print()const;//���غ����������������Ա������const��������
	void ModifyAge();//�����޸��������ͨ��Ա����
};
person::person(int n, char *na)
{
	age = n;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
}
person::~person()
{
	delete[]name;
}
void person::print()
{
	cout << "age:" << age << "name:" << name << endl;
	cout << "This is const print()." << endl;
}
void person::ModifyAge()
{
	age++;
}
int main()
{
	const person p1(17, "wu");//���峣��������ʼ��
	cout << "Output const object p1" << endl;
	p1.print();//������󳣳�Ա����
	person p2(18, "zhang");
	cout << "Output general object p2" << endl;
	p2.ModifyAge();//�����޸����ݳ�Ա
	p2.print();//��ͨ���������ͨ����
	system("pause");
	return 0;
}