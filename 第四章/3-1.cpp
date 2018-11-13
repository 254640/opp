#include<iostream>
using namespace std;
class TT
{
public:
	static int total;
	TT()
	{
		total *= 2;
	}
	~TT()
	{
		total /= 2;
	}
};
int TT::total = 1;
int main()
{
	cout << TT::total << ",";
	TT*p = new TT;
	cout << p->total << ",";
	TT A, B;
	cout << A.total << ",";
	cout << B.total << ",";
	delete p;
	cout << TT::total << endl;
	system("pause");
	return 0;
}