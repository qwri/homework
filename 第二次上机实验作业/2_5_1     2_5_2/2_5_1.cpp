#include<iostream>

using namespace std;

int add(int a, int b);

int main()
{
	int x, y, sum;
	cout << "Please input x and y:\n" ;
	cin >> x >> y;/*������� x �� y ��ֵ*/
	sum = add(x, y);/*������ͺ������������ sum ��*/
	cout << x << '+' << y << '=' << sum;/*��ʾ������*/
	return 0;
}
int add(int a, int b)
{
	return a + b;
}

