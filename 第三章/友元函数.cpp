#include"友元函数.h"
bool Equal(Date &DateA, Date &DateB)
{
	return(DateA.GetYear() == DateB.GetYear() && DateA.GetMonth() == DateB.GetMonth() && DateA.GetDay() == DateB.GetDay());
}
int main()
{
	Date YourBirthday(1990, 10, 17);
	Date MyBirthday(1990, 10, 17);//定义对象，同时完成对象的初始化话
	if (Equal(YourBirthday, MyBirthday))
		cout << "Birthday is the same!\n";
	else
		cout << "BirthDay is the same!\n";
	system("pause");
	return 0;
}