#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
#define SIZE 80
class student
{
private:
	char *name;//����
	char ID[19];//���֤
	char number[10];//ѧ��
	char speciality[20];//רҵ
	int age;//����
	static int counts;//ʵ����Ч��ѧ��������С�ڵ��ڶ���ĸ���
public:
	student();//�޲ι��캯��
	student(char *n, char *id, char *num, char *spe, int ag);//��Ĭ�ϲ����Ĺ��캯��
	student(const student &per);//�������캯��
	~student();//��������
	char *Getname()const;//��ȡ����
	char *GetID();//��ȡ���֤
	char *Getnumber();//��ȡѧ��
	char *Getspec();//��ȡרҵ
	int Getage()const;
	void display()const;
	//int Getage();//��ȡ����
	//void display();//���ѧ������Ϣ
	void insert();
	void Delete();
	void input();//����ѧ������Ϣ
	static int Getcounts();//�����ľ�̬��Ա����
};