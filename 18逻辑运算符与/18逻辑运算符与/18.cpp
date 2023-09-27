#include<iostream>
using namespace std;

int main() {

	//逻辑运算符 与
	//两个条件都为真，结果才为真
	int a = 10;
	int b = 10;

	cout << (a && b) << endl;
	//非0的数都为真

	a = 0;
	b = 10;
	cout << (a && b) << endl;

	a = 0;
	b = 0;
	cout << (a && b) << endl;
	system("pause");

	return 0;
}