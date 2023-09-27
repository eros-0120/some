#include<iostream>
using namespace std;

int main() {

	//1.创建bool数据类型
	bool flag = true;//true代表真
	cout << flag << endl;

	flag = false;//flase代表假
	cout << flag << endl;


	//本质上1代表真
	//0代表假

	cout << "bool类型所占用的空间：" << sizeof(bool) << endl;
	system("pause");

	return 0;
}