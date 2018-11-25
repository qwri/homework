#include<iostream>
using namespace std;
class Student
{
private:
	static int total;
	int num;
	char name[20];
public:
	Student(){ total++; }
	~Student(){ total--; }
	Student(int n, char *p = "Wang");
	void GetName();
	int Getnum();
	static void Print();//声明一个公有的静态成员函数
};
int Student::total = 0;
Student::Student(int n, char *p)
{
	num = n;
	strcpy_s(name, strlen(p)+1, p);
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
void Student::Print()
{
	cout << "The number of all students: " << total<<endl;
}


int main()
{
	Student::Print();
	Student *p = new Student(13);
	Student::Print();
	p->Print();
	delete p;
	Student::Print();
	Student s[2];
	s[0].Print();
	s[1].Print();
	system("pause");
	return 0;
}