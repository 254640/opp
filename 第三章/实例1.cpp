#include<iostream>
using namespace std;
#include"实例.h"
const int N = 10;
void menu();
void Outputstu(student *arry);
void Inputstu(student *arry);
int Searchstu(student *arry, char *na);
int count = 0;
int main()
{
	student array[N];//定义学生数组
	int choice;//读入选项
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
					cout << "查无此人！\n";
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
	cout << "******1录入信息******" << endl;
	cout << "******2查询信息******" << endl;
	cout << "******3浏览信息******" << endl;
	cout << "******0退    出******" << endl;
}
void Outputstu(student *arry)//输出对象数组
{
	cout << "学生总人数="<< count << endl;
	for (int i = 0; i < count; i++)
		arry[i].Display();
}
int Searchstu(student *arry, char *na)//按名查询
{
	int i, j = N;
	for (i = 0; i < count;i++)
	if (strcmp(arry[i].Getname(), na) == 0)
		j = i;
	return j;
}
void InputStu(student *arry)//输入对象数组元素
{
	char ch;
	do
	{
		arry[count].Input();
		count++;
		cout << "继续输入吗？(Y or N)" << endl;
		cin >> ch;
	} while (ch == 'Y');
}