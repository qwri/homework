#include<iostream>
using namespace std;
#include"example4_04_Circle.h"
int main()
{
	Circle c1(3.5), c2;
	cout << "radius of c1=" << c1.GetRadius();//调用常成员函数输出半径
	cout << " , area of c1=" << c1.Area() << " , circumference of c1=" << c1.Circumference() << endl;//调用常成员输出半径
	cout << "radius of c2=" << c2.GetRadius();
	cout << " , area of c2=" << c2.Area() << " , circumference of c2=" << c2.Circumference() << endl; 
	system("pause");
	return 0;
}