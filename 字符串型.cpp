#include<iostream>
using namespace std;

int main()
{
	// C 风格
	char str1[] = "Hello World!HHHHHOOrld";
	cout << str1 << endl;
	cout << sizeof(str1) << endl;


	// cpp 风格

	string str2 = "HelloWorldHeloo";
	cout << str2 << endl;
	cout << sizeof(str2) << endl;
	cout << sizeof(string) << endl;

	system("pause");
	return 0;
}