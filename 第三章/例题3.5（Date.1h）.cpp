#include"Date1.h"
#include<windows.h>
int main()
{
	Date today, *t;
	today.SetDate(2006, 10, 27);
	cout << "one day is:";
	today.Display();
	t = &today;
	(*t).SetDate(2007, 12, 18);
	cout << "the other day is:";
	(*t).Display();
		system("pause");
	return 0;
}