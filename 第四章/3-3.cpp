#include<iostream>
using namespace std;
class pp
{
	char c;
public:
	pp(char cc = 'A'){ c = cc; }
	void show();
	void show()const;
};
void pp::show()
{
	cout << c << "@";
}
void pp::show()const
{
	cout << c << "!";
}
int main()
{
	pp p1('B'), p2;
	//const pp p3('s');
	p1.show();
	p2.show();
	//p3.show();
	cout << endl;
	system("pause");
	return 0;
}