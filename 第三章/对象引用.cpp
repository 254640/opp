#include"对象引用.h"
	Date DateA(2010, 1, 1), DateB(2010, 5, 1);//调用两次构造函数生成两个对象
	Date &pDate = DateA;//引用pDate初始化对象Date的别名，不调用构造函数
void f()//用于输出对象DateA，DateB和引用pDate的值
{
    DateA.Display();
	DateB.Display();
	pDate.Display();
}
int main()
{
	cout << "original DateA,DateB,pDate:" << endl;
	f();
	pDate = DateB;//相当于DateA=DateB，pDate仍是Date的别名
	cout << "after pDate=DateB,DateA,DateB,pDate:" << endl;
	f();//此处输出的是DateA，DateB，pDate的值进行修改相当于DateA=Date(2010,10,1);
	cout << "after  pDate=Date(2010,10,1),DateA,DateB,pDate:" << endl;
	f();//此处输出的DateA和pDate一定相等
	system("pause");
	return 0;
}

