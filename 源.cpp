//�����д��ʮ������

#include<iostream>
#include<windows.h>
using namespace std;
#include<iomanip>//��ͷ�ļ��ж�����һЩ�����������ʽ�ĺ�����Ĭ�������Ϊʮ����
void main()
{
	int i = 0x2F;
	int j = 255;
	cout << i << endl;
	cout << hex << i << endl;
	cout << hex << j << endl;
	cout << hex << setiosflags(ios::uppercase) << j << endl;//hex�ɽ�������Ϊʮ�����Ƶ����
	system("pause");
}


//���߼����ʽ��ֵ
#include<iostream>
#include<windows.h>
using namespace std;
void main()
{
	int i = 5, j = 8, k = 12, l = 4, x1, x2;
	x1 = i > j&&k > l;
	x2 = !(i > j) && k > l;
	printf("%d,%d\n", x1, x2);
	system("pause");
}


//ǿ�����͵�ת��������˵���������ʽ�����ߣ�����˵���������ʽ��
#include<iostream>
#include<windows.h>
using namespace std;
void main()
{
	float i, j;
	int k;
	i = 60.25;
	j = 20.5;
	k = (int)i + (int)j;
	cout << k << endl;
	system("pause");
}



//�ж���䣺���ݳɼ����ֵȼ�
#include<iostream>
#include<windows.h>
using namespace std;
void main()
{
	int grade;
	cin >> grade;
	if (grade >= 90)
	{
		cout << "very good" << endl;
	}
	else if (grade >= 80 && grade < 90)
	{
		cout << "good" << endl;
	}
	else if (grade >= 70 && grade < 80)
	{
		cout << "good" << endl;
	}
	else if (grade >= 60 && grade < 70)

	{
		cout << "normal" << endl;
	}
	else if (grade < 60)
	{
		cout << "failure" << endl;
	}
	system("pause");
}


//�������ʽ���ж�һ�����Ƿ�Ϊ3��5��������(��ϵ���ʽ�����ʽ1�����ʽ2)
#include<iostream>
#include<windows.h>
using namespace std;
void main()
{
	int i;
	cout << "����i��ֵ" << endl;
	cin >> i;
	(i % 3 == 0 && i % 5 == 0) ? cout << "yes" : cout << "no";
	cout << endl;
	system("pause");
}


//switch��䣺����������ַ�����ַ�������ƥ��ɹ���break����ѭ�������ʽ���������ʽ����˸�ֵ������Ϊ���λ��ַ��ͣ�
#include<iostream>
#include<windows.h>
using namespace std;
void main()
{
	char i;
	cin >> i;
	switch (i)
	{
	case'A':
			cout << "very good" << endl;
			break;
	case'B':
				cout << "good" << endl;
				break;
	case'C':
					cout << "normal" << endl;
	case'D':
						cout << "failure" << endl;
					defalut:
						cout << "i error" << endl;
	}
	system("pasue");
}

//�ж�����Ƕ��:�ж��Ƿ�Ϊ����
#include<iostream>
#include<windows.h>
using namespace std;
void main()
{
	int Year;
	cin >> Year;
	if (Year % 4 == 0)
	{
		if (Year % 100 == 0)
		{
			if (Year % 400 == 0)
				cout << "������" << endl;
			else
				cout << "��������" << endl;
		}
		else
			cout << "������" << endl;
	}
	else
		cout << "��������" << endl;
	system("pasue");
}

