#include<iostream>
using namespace std;

int main() {

	//�߼������ ��
	//����������Ϊ�棬�����Ϊ��
	int a = 10;
	int b = 10;

	cout << (a && b) << endl;
	//��0������Ϊ��

	a = 0;
	b = 10;
	cout << (a && b) << endl;

	a = 0;
	b = 0;
	cout << (a && b) << endl;
	system("pause");

	return 0;
}