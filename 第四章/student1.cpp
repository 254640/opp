#define _CRT_SECURE_NO_WARNINGS
#include"student.h"
int student::counts = 0;
student::student()//�������޲εĹ��캯��
{
	name = NULL;
	age = 0;
}
student::student(char *n, char *id, char *num, char *spe, int ag)//���ò����Ĺ��캯��
{
	if (n)
	{
		name = new char[strlen(n) + 1];//����ǳ����
		strcpy(name, n);
	}
	strcpy(ID, id);
	strcpy(number, num);
	strcpy(speciality, spe);
	age = ag;
}
student::student(const student &per)
{
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];
		strcpy(name, per.name);
	}
	strcpy(ID, per.ID);
	strcpy(number, per.number);
	strcpy(speciality, per.speciality);
	age = per.age;
	counts++;
}
student::~student()//������������
{
	if (name)
		delete[]name;
	counts--;
}
char *student::Getname()const//��ȡ����
{
	return name;
}
char *student::GetID()//��ȡ���֤
{
	return ID;
}
char *student::Getnumber()//��ȡѧ��
{
	return number;
}
char *student::Getspec()//��ȡרҵ
{
	return speciality;
}
int student::Getage()const//��ȡ����
{
	return age;
}
void student::display()const//���ѧ������Ϣ
{
	cout << "����:" << name << endl;
	cout << "���֤:" << ID << endl;
	cout << "ѧ��:" << number << endl;
	cout << "רҵ:" << speciality << endl;
	cout << "����:" << age << endl;
}
void student::input()//����ѧ������Ϣ
{
	char n[10];
	cout << "��������:";
	cin >> n;
	if (name)
		delete[]name;
	name = new char[strlen(n) + 1];
	strcpy(name, n);
	cout << "�������֤:" << endl;
	cin >> ID;
	cout << "��������:" << endl;
	cin >> age;
	cout << "����רҵ:" << endl;
	cin >> speciality;
	cout << "����ѧ��:" << endl;
	cin >> number;
	counts++;
}
void student::insert()//����
{
	if (!age)//�������age��ԱֵΪ0ʱ���ڴ˵���input��������
		input();
}
void student::Delete()//����
{
	age = 0;
	counts--;//ֻ�򵥵Ľ�age��0�����ƶ�����Ԫ��
}
int student::Getcounts()//�����ľ�̬��Ա������ר���������ʾ�̬���ݳ�Ա
{
	return counts;

}