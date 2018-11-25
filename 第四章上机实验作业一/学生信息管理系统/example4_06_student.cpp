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
		cout << "�� ��" << name << endl;
		cout << "���֤" << ID << endl;
		cout << "ѧ ��" << number << endl;
		cout << "ר ҵ" << speciality<< endl;
		cout << "�� ��" << age << endl;
	}
	void Student::Input()
	{
		char na[10];
		cout << "����������";
		cin >> na;
		if (name)
			delete []name;
		name = new char[strlen(na) + 1];
		strcpy_s(name, strlen(na) + 1, na);
		cout << "�������֤��";
		cin >> ID;
		cout << "�������䣺";
		cin >> age;
		cout << "����רҵ��";
		cin >> speciality;
		cout << "����ѧ�ţ�";
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
