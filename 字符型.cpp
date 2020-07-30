#include<iostream>
using namespace std;

int main() {
	char ch = 'a';
	cout << ch << endl;
	cout << sizeof(char) << endl;
	cout << sizeof(ch) << endl;

	cout << (int)ch << endl; //查看字符a对应的ASCII码
	ch = 97;
	cout << ch << endl;

	ch = 'A';
	cout << (int)ch << endl;

	system("pause");

	return 0;
}