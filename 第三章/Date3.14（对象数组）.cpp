#include"Date3.14.h"
int main()
{
	int i;
	Date arry[3] = { Date(2011, 5, 1), Date(2011, 10, 1) };
	for (i = 0; i < 3; i++)
	{
		arry[i].Display();
	}
	system("pause");
	return 0;
}