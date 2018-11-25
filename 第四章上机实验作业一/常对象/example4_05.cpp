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
	void Print() const;//����Ա����
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
	cout << "age:" << age << " name:" << name << endl;//ֻ�޸ģ�������
	cout << "This is const Print()." << endl;     
}
void Person::ModifyAge()
{
	age++;
}

int main()
{
	const Person p1(17, "wu");  //���峣����ʱ�����ʼ��
	cout << "Output const object p1" << endl;
	p1.Print();					//��������ó���Ա������ֻ�ܣ�
	Person p2(18, "zhang");     //������ͨ����
	cout << "Output general object p2" << endl;
	p2.Print();					//��ͨ�������ȵ�����ͨ��Ա����
	p2.ModifyAge();				//��ͨ�����޸����е����ݳ�Ա
	cout << "�޸�p2�� age��ֵ��" << endl;
	p2.Print();
	system("pause");
	return  0;
}