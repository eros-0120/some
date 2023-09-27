#include<iostream>
using namespace std;


int main() {

	//1.字符型变量创建方式
	char ch = 'a';
	cout << ch << endl;

	//2.字符型变量所占内存的大小
	cout << "字符型变量所占内存：" << sizeof(char) << endl;


	//3.字符型变量常见错误
	//char ch2 = "b";(要用单引号而不是双引号)
	//char ch2 = 'abcdef';(创建字符型变量时，单引号内只能有一个字符)

	//4.字符型变量对应ASCII编码
	cout << (int)ch << endl;
	//证明在底层是以ASCII编码存储的而不是直接记为'a'


	system("pause");

	return 0;
}