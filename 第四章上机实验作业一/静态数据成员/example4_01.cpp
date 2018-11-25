#include<iostream>
using namespace std;
class Student
{
private:
	int num;
	char name[20];
public:
	static int total;//公有的静态数据成员，代表学生数量
	Student(){ total++; }//无参构造函数，每调用一次，total+1 实现
	~Student(){ total--; }//析构函数，每调用一次，total—1  实现
	Student(int n, char *p = "Wang");//有参有一个默认值的构造函数 声明部分
	void GetName();
	int Getnum();
};
int Student::total = 0;//静态数据成员的初始化
Student::Student(int n, char *p)//类外实现部分      （有参构造函数：类内声明，提供默认参数值，函数定义时首部不能再提供默认参数值）
{
	num = n;
	strcpy_s(name,strlen(p)+1,p);
	total++;
}
void Student::GetName()
{
	cout << name << endl;
}
int Student::Getnum()
{
	return num;
}

int main()
{
	cout << "The number of all students :" << Student::total << endl; //无对象时可用类名：：静态成员形式来访问
	Student *q = new Student(13);//
	cout << "The number of all students :" << Student::total << endl; //一、用类名：：静态成员形式访问
	cout << "The number of all students :" << q->total << endl;		  //二、用指针所指向的对象去访问
	delete q;														  //通过指针删除动态对象，析构一次
	cout << "The number of all students :" << Student::total << endl;
	//cout << "The number of all students :" << p->total << endl;
	Student s[2];													  //定义两个对象，构造函数调用两次
	cout << "The number of all students :" << s[0].total << endl;
	cout << "The number of all students :" << s[1].total << endl;
	system("pause");
	return 0;
}