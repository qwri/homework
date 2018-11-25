#include"example4_06_student.h"
int Student::count = 0;
Student::Student()
{
	name = NULL;
	age = 0;
}
Student::Student(char *na,char* id,char* num,char *spec,int ag)
{
	if (na)
	{
		name = new char[strlen(na) + 1];
		strcpy_s(name, strlen(na) + 1, na);
	}
	strcpy_s(ID, strlen(id) + 1, id);
	strcpy_s(number, strlen(num) + 1, num);
	strcpy_s(speciality, strlen(spec) + 1, spec);
	age = ag;
	count++;
}
Student::Student(const Student &per)
{
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];
		strcpy_s(name, strlen(per.name) + 1, per.name);
	}
	strcpy_s(ID, strlen(per.ID) + 1, per.ID);
	strcpy_s(number, strlen(per.number) + 1, per.number);
	strcpy_s(speciality, strlen(per.speciality) + 1, per.speciality);
	age = per.age;
	count++;
}
Student::~Student()
{
	cout << "disCon" << endl;
	if (name)
	{
		delete []name;
		count--;
	}
}
	char* Student::GetName()const
	{
		return name;
	}
	char* Student::GetID()
	{
		return ID;
	}
	int Student::GetAge()const
	{
		return age;
	}
	char *Student::GetSpec()
	{
		return speciality;
	}
	char* Student::GetNumber()
	{
		return number;
	}
	void Student::Display()const
	{
		cout << "姓 名" << name << endl;
		cout << "身份证" << ID << endl;
		cout << "学 号" << number << endl;
		cout << "专 业" << speciality<< endl;
		cout << "年 龄" << age << endl;
	}
	void Student::Input()
	{
		char na[10];
		cout << "输入姓名：";
		cin >> na;
		if (name)
			delete []name;
		name = new char[strlen(na) + 1];
		strcpy_s(name, strlen(na) + 1, na);
		cout << "输入身份证：";
		cin >> ID;
		cout << "输入年龄：";
		cin >> age;
		cout << "输入专业：";
		cin >> speciality;
		cout << "输入学号：";
		cin >> number;
		count++;
	}
	void Student::Insert()
	{
		if (!age)
			Input();
	}
	void Student::Delete()
	{
		age = 0;
		count--;
	}
	int Student::GetCount()
	{
		return count;
	}
