#include<iostream>

using namespace std;

const float PI = 3.14159;

void CalcuCircle(float r,float &S1,float &l1)
{
	S1 = PI*r*r;
	l1 = 2 * PI*r;
}

int main()
{
	float r,S,l;
	float &S1 = S, &l1 = l;
	cout << "������Բ�İ뾶r��ֵ��" << endl;
	cin >> r;
	CalcuCircle(r,S1,l1);
	cout << "Բ�����Ϊ��" << S<<'\n' << "Բ���ܳ�Ϊ��" << l << endl;

	system("Pause");
	return 0;
}