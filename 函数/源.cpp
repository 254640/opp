//输出大写的十六进制

#include<iostream>
#include<windows.h>
using namespace std;
#include<iomanip>//该头文件中定义了一些控制流输出格式的函数，默认情况下为十进制
void main()
{
	int i = 0x2F;
	int j = 255;
	cout << i << endl;
	cout << hex << i << endl;
	cout << hex << j << endl;
	cout << hex << setiosflags(ios::uppercase) << j << endl;//hex可将其设置为十六进制的输出
	system("pause");
}


//求逻辑表达式的值
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


//强制类型的转换（类型说明符（表达式）或者（类型说明符）表达式）
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



//判断语句：根据成绩划分等级
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


//条件表达式：判断一个数是否为3和5的整倍数(关系表达式？表达式1：表达式2)
#include<iostream>
#include<windows.h>
using namespace std;
void main()
{
	int i;
	cout << "输入i的值" << endl;
	cin >> i;
	(i % 3 == 0 && i % 5 == 0) ? cout << "yes" : cout << "no";
	cout << endl;
	system("pause");
}


//switch语句：根据输入的字符输出字符串（若匹配成功用break跳出循环，表达式是算数表达式，因此该值的类型为整形或字符型）
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

//判断语句的嵌套:判断是否为闰年
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
				cout << "是闰年" << endl;
			else
				cout << "不是闰年" << endl;
		}
		else
			cout << "是闰年" << endl;
	}
	else
		cout << "不是闰年" << endl;
	system("pasue");
}

