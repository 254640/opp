#include<iostream>
using namespace std;
#include"ʵ��.h"
const int N = 10;
void menu();
void Outputstu(student *arry);
void Inputstu(student *arry);
int Searchstu(student *arry, char *na);
int count = 0;
int main()
{
	student array[N];//����ѧ������
	int choice;//����ѡ��
	do
	{
		menu();
		cout << "please input your choice:";
		cin >> choice;
		if (choice>=0&&choice<=3)
			switch (choice)
		{
			case 1:Inputstu(array); break;
			case 2:cout << "Input the name searched" << endl;
				char na[20];
				cin >> na;
				int i;
				i = Searchstu(array, na);
				if (i == N)
					cout << "���޴��ˣ�\n";
				else
					array[i].Display();
				break;
			case 3:Outputstu(array); break;
			default:break;
		}
	} while (choice);
	return 0;
}
void menu()
{
	cout << "******1¼����Ϣ******" << endl;
	cout << "******2��ѯ��Ϣ******" << endl;
	cout << "******3�����Ϣ******" << endl;
	cout << "******0��    ��******" << endl;
}
void Outputstu(student *arry)//�����������
{
	cout << "ѧ��������="<< count << endl;
	for (int i = 0; i < count; i++)
		arry[i].Display();
}
int Searchstu(student *arry, char *na)//������ѯ
{
	int i, j = N;
	for (i = 0; i < count;i++)
	if (strcmp(arry[i].Getname(), na) == 0)
		j = i;
	return j;
}
void InputStu(student *arry)//�����������Ԫ��
{
	char ch;
	do
	{
		arry[count].Input();
		count++;
		cout << "����������(Y or N)" << endl;
		cin >> ch;
	} while (ch == 'Y');
}