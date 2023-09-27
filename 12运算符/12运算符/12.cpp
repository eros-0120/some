#include<iostream>
using namespace std;

int main() {
	
	//加减乘除
	int a1 = 10;
	int b1 = 3;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;
	//两个整数相除，结果依然是整数，将小数部分去除
	//两个数相除，除数不能为0

	double d1 = 0.5;
	double d2 = 0.25;
	cout << d1 / d2 << endl;

	double d3 = 0.22;
	cout << d1 / d3 << endl;
	//运算的结果也可以是小数


	system("pause");

	return 0;
}