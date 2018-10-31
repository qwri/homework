#include<string>
#include<iostream>
using namespace std;
class Student
{
	char *specialty;
public:
	Student(char *pSpec = 0);//构造函数声明
	~Student();
	Student(const Student &r);//拷贝构造函数声明
	void Show();
};
//构造函数的定义
Student::Student(char *pSpec)
{
	if (pSpec)
	{
		specialty = new char[strlen(pSpec) + 1];
		strcpy_s(specialty, strlen(pSpec) + 1, pSpec);
	}
	else specialty = 0;
}
//析构函数实现
Student::~Student()
{
	if (specialty)
		delete[]specialty;//specialty 的存储空间由new运算符分配，需用delete释放
}
//拷贝构造函数在类外实现
Student::Student(const Student &r)
{
	if (r.specialty)
	{
		specialty = new char[strlen(r.specialty) + 1];
		strcpy_s(specialty, strlen(r.specialty) + 1, r.specialty);
	}
	else specialty = 0;
}
void Student::Show()
{
	cout << "specialty=" << specialty << '\n';
}
int main()
{
	Student zhang("computer");
	Student wang(zhang);
	zhang.Show();
	wang.Show();
	system("pause");
	return 0;
	
}