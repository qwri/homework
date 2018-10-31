#include<string>
#include<iostream>
using namespace std;
class Student
{
	char *specialty;
public:
	Student(char *pSpec = 0);//���캯������
	~Student();
	Student(const Student &r);//�������캯������
	void Show();
};
//���캯���Ķ���
Student::Student(char *pSpec)
{
	if (pSpec)
	{
		specialty = new char[strlen(pSpec) + 1];
		strcpy_s(specialty, strlen(pSpec) + 1, pSpec);
	}
	else specialty = 0;
}
//��������ʵ��
Student::~Student()
{
	if (specialty)
		delete[]specialty;//specialty �Ĵ洢�ռ���new��������䣬����delete�ͷ�
}
//�������캯��������ʵ��
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