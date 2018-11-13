#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include"student.h"
const int N = 10;
void menu();
void outputstu(student *array);
void inputstu(student *array);
int searchstu(student *array, char *n);
bool insertstu(student *array);
bool Deletestu(student *array, char *na);
int counts = 0;//���ڼ���
int main()
{
	student array[N];
	int choice;//����ѡ��
	char na[20];
	do
	{
		menu();
		cout << "please input your choice:";
		cin >> choice;
		if (choice >= 0 && choice <= 5)
			switch (choice)
		{

			case 1:inputstu(array); break;
			case 2:cout << "Input the name searched" << endl;
				char n[20];
				cin >> n;
				int i;
				i = searchstu(array, n);
				if (i == N)
					cout << "���޴��ˣ�\n";
				else
					array[i].display();
				break;
			case 3:outputstu(array); break;
			case 4:if (insertstu(array))
				cout << "�ɹ�����һ����¼\n";
				   else
					   cout << "����ʧ�ܣ�\n";
				break;
			case 5:
				cout << "Input the name deleted:" << endl;
				cin >> na;
				if (Deletestu(array, na))
					cout << "�ɹ�ɾ��һ����¼\n";
				else
					cout << "ɾ��ʧ�ܣ�\n";
				break;
			default:break;
		}
	} while (choice);

	return 0;
}
void menu()
{
	cout << "**********1.¼����Ϣ**********" << endl;
	cout << "**********2.��ѯ��Ϣ**********" << endl;
	cout << "**********3.�����Ϣ**********" << endl;
	cout << "**********0.��    ��**********" << endl;
}
void outputstu(student *array)//�����������Ԫ��
{
	cout << "ѧ��������=" << counts << endl;
	for (int i = 0; i < counts; i++)
	if (array[i].Getage())
		array[i].display();
}
int searchstu(student *array, char *n)//������ѯ
{

	int i;
	int j = N;
	for (i = 0; i < counts; i++)
	if (array[i].Getage())
	if (strcmp(array[i].Getname(), n) == 0)
	{
		j = i;
	break;
}
return j;
}
void inputstu(student *array)
{
	char ch;
	int i = 0;
	do
	{
		if (student::Getcounts() == N)
			cout << "�����������޷�¼��!\n" << endl;
		array[i++].input();
		//counts++;
		cout << "����������(Y or N)" << endl;
		cin >> ch;
	} while (ch == 'Y');
}
bool insertstu(student *array)
{
	if (student::Getcounts() == N)
	{
		cout << "��������" << endl;
		return false;
	}
	for (int i = 0; array[i].Getage(); i++)//�ҵ���һ������Ϊ0�Ŀ�λ��
		array[i].insert();
	return true;
}
bool Deletestu(student *array, char *na)
{
	if (student::Getcounts() == 0)
	{
		cout << "û�м�¼" << endl;
		return false;
	}
	int i = searchstu(array, na);
	if (i == N)
	{
		cout << "���޴���\n";
		return false;
	}
	array[i].Delete();
	return true;
}