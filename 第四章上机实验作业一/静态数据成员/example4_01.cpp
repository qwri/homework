#include<iostream>
using namespace std;
class Student
{
private:
	int num;
	char name[20];
public:
	static int total;//���еľ�̬���ݳ�Ա������ѧ������
	Student(){ total++; }//�޲ι��캯����ÿ����һ�Σ�total+1 ʵ��
	~Student(){ total--; }//����������ÿ����һ�Σ�total��1  ʵ��
	Student(int n, char *p = "Wang");//�в���һ��Ĭ��ֵ�Ĺ��캯�� ��������
	void GetName();
	int Getnum();
};
int Student::total = 0;//��̬���ݳ�Ա�ĳ�ʼ��
Student::Student(int n, char *p)//����ʵ�ֲ���      ���вι��캯���������������ṩĬ�ϲ���ֵ����������ʱ�ײ��������ṩĬ�ϲ���ֵ��
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
	cout << "The number of all students :" << Student::total << endl; //�޶���ʱ��������������̬��Ա��ʽ������
	Student *q = new Student(13);//
	cout << "The number of all students :" << Student::total << endl; //һ��������������̬��Ա��ʽ����
	cout << "The number of all students :" << q->total << endl;		  //������ָ����ָ��Ķ���ȥ����
	delete q;														  //ͨ��ָ��ɾ����̬��������һ��
	cout << "The number of all students :" << Student::total << endl;
	//cout << "The number of all students :" << p->total << endl;
	Student s[2];													  //�����������󣬹��캯����������
	cout << "The number of all students :" << s[0].total << endl;
	cout << "The number of all students :" << s[1].total << endl;
	system("pause");
	return 0;
}