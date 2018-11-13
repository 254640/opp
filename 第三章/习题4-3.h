#include<iostream>
#include<string.h>
#include<windows.h>
using namespace std;
class car
{
private:
	char *brand;
	char *model;
	int year;
	int price;
public:
	car(char *b, char *m, int y, int p);
	char *Getbrand();
	char *Getmodel();
	int Getyear();
	int Getprice();
	void Display();
};
car::car(char *b, char *m, int y, int p)
{
	brand = b;
	model = m;
	year = y;
	price = p;
}
char *car::Getbrand()
{
	return brand;
}
char *car::Getmodel()
{
	return model;
}
int car::Getyear()
{
	return year;
}
int car::Getprice()
{
	return price;
}
void car::Display()
{
	cout << brand << "-"<< model << "-" << year << "-" << "price" << endl;
}