#include<iostream>
using namespace std;
class FF
{
	static int num;
public:
	FF(){ num++; }
	~FF(){ num--; }
	static int Getnum()
	{
		return num;
	}
};
int FF::num = 0;
int main()
{
	cout << FF::Getnum() << ",";
	FF *p = new FF[2], a[2];
	cout << p[0].Getnum() << ",";
	cout << p[1].Getnum() << ",";
	cout << a[0].Getnum() << ",";
	cout << a[1].Getnum() << ",";
		delete[]p;
		cout << a[0].Getnum() << ",";
			cout << a[1].Getnum() << ",";
			cout << FF::Getnum() << endl;
			system("pause");
			return 0;

}