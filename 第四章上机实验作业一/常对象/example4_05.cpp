#include<iostream>
using namespace std;
class Person
{
private:
	int age;
	char *name;
public:
	Person(int n = 1, char *na = "zhuli");
	~Person();
	void Print();
	void Print() const;//常成员函数
	void ModifyAge();
};
Person::Person(int n, char *na)
{
	age = n;
	name = new char[strlen(na) + 1];
	strcpy_s(name, strlen(na) + 1, na);
}
Person::~Person()
{
	delete name;
}
void Person::Print()
{
	cout << "age:" << age << " name:" << name << endl;
	cout << "This is general Print()." << endl;
}
void Person::Print() const
{
	cout << "age:" << age << " name:" << name << endl;//只修改，不访问
	cout << "This is const Print()." << endl;     
}
void Person::ModifyAge()
{
	age++;
}

int main()
{
	const Person p1(17, "wu");  //定义常对象时必须初始化
	cout << "Output const object p1" << endl;
	p1.Print();					//常对象调用常成员函数（只能）
	Person p2(18, "zhang");     //定义普通对象
	cout << "Output general object p2" << endl;
	p2.Print();					//普通对象优先调用普通成员函数
	p2.ModifyAge();				//普通对象，修改其中的数据成员
	cout << "修该p2中 age的值后：" << endl;
	p2.Print();
	system("pause");
	return  0;
}