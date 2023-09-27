#include<iostream>
using namespace std;

int main() {

	//while循环
	//在屏幕中打印0-9 这十个数字

	int num = 0;
	
	while (num < 10) {
		
		cout << num << endl;
		num++;
		/*
		如果把num++写在cout << num << endl;的前面
		则会输出1-10，因为语句呈先+1再执行表达式
		反之，输出0-9，因为语句呈先执行表达式再+1
		*/

	}


	system("pause");

	return 0;
}