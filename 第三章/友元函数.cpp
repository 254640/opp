#include"��Ԫ����.h"
bool Equal(Date &DateA, Date &DateB)
{
	return(DateA.GetYear() == DateB.GetYear() && DateA.GetMonth() == DateB.GetMonth() && DateA.GetDay() == DateB.GetDay());
}
int main()
{
	Date YourBirthday(1990, 10, 17);
	Date MyBirthday(1990, 10, 17);//�������ͬʱ��ɶ���ĳ�ʼ����
	if (Equal(YourBirthday, MyBirthday))
		cout << "Birthday is the same!\n";
	else
		cout << "BirthDay is the same!\n";
	system("pause");
	return 0;
}