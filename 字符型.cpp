#include<iostream>
using namespace std;

int main() {
	char ch = 'a';
	cout << ch << endl;
	cout << sizeof(char) << endl;
	cout << sizeof(ch) << endl;

	cout << (int)ch << endl; //�鿴�ַ�a��Ӧ��ASCII��
	ch = 97;
	cout << ch << endl;

	ch = 'A';
	cout << (int)ch << endl;

	system("pause");

	return 0;
}