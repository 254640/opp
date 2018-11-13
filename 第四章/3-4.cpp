#include<iostream>
using namespace std;
class circle
{
	const double PI;
	double r;
public:
	circle(double rr) :PI(3.14)
	{
		r = rr;
	}
	double Area()const{
		return PI*r*r;
	}
};
int main()
{
	circle c1(2);
	const circle c2(3);
	cout << c1.Area() << endl;
	cout << c2.Area() << endl;
	system("pause");
	return 0;
}