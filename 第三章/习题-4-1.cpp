#include"xiti.h"
int main()
{
	int i;
	student arry[3] = { student(20,"С��"),student(19,"С��") };
	for (i = 0; i < 3; i++)
	{
		arry[i].Display();
	}
	system("pause");
	return 0;
}