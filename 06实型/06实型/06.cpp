#include<iostream>
using namespace std;

int main() {

	//������float
	//˫����double

	float f1 = 3.14f;
	
	cout << "f1= " << f1 << endl;

	double d1 = 3.14;
	cout << "d1= " << d1 << endl;

	//ͳ��float��double��ռ�õ��ڴ�Ŀռ�

	cout << "f1��ռ�õ��ڴ�ռ䣺" << sizeof(float) << endl;

	cout << "d1��ռ�õ��ڴ�ռ䣺" << sizeof(double) << endl;

	//��ѧ������
	float f2 = 3e2;//���壺3* 10�Ķ��η�(e�������������)
	cout << "f2= " << f2 << endl;

	float f3 = 3e-2;//���壺3* 0.1�Ķ��η���e��������Ǹ�����
	cout << "f3= " << f3 << endl;

	system("pause");

	return 0;
}