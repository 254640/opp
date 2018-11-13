#include<iostream>
#include<string>
#include<stdlib.h>
#include<windows.h>
using namespace std;
#define SIZE 80
class student
{
	char *name;
	char ID[19];//身份证
	char number[10];//学号
	char speciality[20];//专业
	int age;
public:
	student();
	~student();
	student(char *na, char *id, char *nu, char *spec, int age);
	student(const student &per);
	char *Getname();
	char *GetID();
	char *GetNumber();
	char *GetSpec();
	int GetAge();
	void Display();
	void Input();
};

