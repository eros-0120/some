#include<iostream>
using namespace std;

#include<string>
//用C++风格时需要加上这段头文件

int main() {
	//1.C风格字符串
	//注意事项 char 字符串名[]
	//注意事项2 等号后面要用双引号 包含起来字符串
	char str[] = "hello world";
	cout << str << endl;

	//2.C++风格字符串

	string str2 = "hello world";
	cout << str2 << endl;

	system("pause");

	return 0;
}