#include"对象指针.h"
int main()
{
	Date *q = new Date(2010, 4, 1);//申请一个对象的动态空间，并将首地址赋给对象指针q
	cout << "one dynamic object is:" << endl;
	delete q;//释放q对象的动态空间，调用一次析构函数
	q->Display();
	delete q;
	q = new Date[3];
	q[0] = Date(2011, 5, 1);//调用有参数的构造函数生成无名对象赋值给q[0]
	q[1] = Date(2011, 10, 1);//调用有参函数生成无名对象赋值给q[1];
	for (int i = 0; i < 3; i++)//这时的指针q相当于一维数组名，可以作数组名使用
		q[i].Display();
	delete[]q;//释放对象数组的空间，调用三次析构行数
	system("pause");
	return 0;
}