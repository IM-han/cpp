#include<iostream>
using namespace std;

int main()
{
	// 整型输入
	int a = 0;
	cout << "请输入整型变量：" << endl;
	cin >> a;
	cout << a << endl;

	// 浮点型输入
	float f = 0;
	cout << "请输入浮点型变量：" << endl;
	cin >> f;
	cout << f << endl;

	// 字符型输入
	char ch = 0;
	cout << "请输入字符型变量：" << endl;
	cin >> ch;
	cout << ch << endl;

	// 字符串型输入
	string str;
	cout << "请输入字符串型变量：" << endl;
	cin >> str;
	cout << str << endl;

	// 布尔类型输入
	bool flag = true;
	cout << "请输入布尔类型：" << endl;
	cin >> flag;
	cout << flag << endl;


	system("pause");

	return EXIT_SUCCESS;
}