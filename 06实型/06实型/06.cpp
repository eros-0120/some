#include<iostream>
using namespace std;

int main() {

	//单精度float
	//双精度double

	float f1 = 3.14f;
	
	cout << "f1= " << f1 << endl;

	double d1 = 3.14;
	cout << "d1= " << d1 << endl;

	//统计float和double所占用的内存的空间

	cout << "f1所占用的内存空间：" << sizeof(float) << endl;

	cout << "d1所占用的内存空间：" << sizeof(double) << endl;

	//科学计数法
	float f2 = 3e2;//意义：3* 10的二次方(e后面跟的是正数)
	cout << "f2= " << f2 << endl;

	float f3 = 3e-2;//意义：3* 0.1的二次方（e后面跟的是负数）
	cout << "f3= " << f3 << endl;

	system("pause");

	return 0;
}