#include<iostream>
using namespace std;

// 宏常量
#define day 7

int main()
{
	cout << "一周总共有：" << day << " 天" << endl;

	// const修饰变量
	const int month = 12;
	cout << "一年总共有：" << month << "月" << endl;
	system("pause");

	return 0;
}