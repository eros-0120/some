#include<iostream>
using namespace std;

int main() {

	//���ͣ�short(2) int(4) long(4) long long(8)
	//��������sizeof�����������ռ���ڴ��С
	//�﷨:sizeof(��������/����)

	short num1 = 10;
	cout << "shortռ���ڴ�ռ�Ϊ: " << sizeof(short) << endl;

	int num2 = 10;
	cout << "intռ���ڴ�ռ�Ϊ: " << sizeof(int) << endl;

	system("pause");

	return 0;
}