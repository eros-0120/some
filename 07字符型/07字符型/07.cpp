#include<iostream>
using namespace std;


int main() {

	//1.�ַ��ͱ���������ʽ
	char ch = 'a';
	cout << ch << endl;

	//2.�ַ��ͱ�����ռ�ڴ�Ĵ�С
	cout << "�ַ��ͱ�����ռ�ڴ棺" << sizeof(char) << endl;


	//3.�ַ��ͱ�����������
	//char ch2 = "b";(Ҫ�õ����Ŷ�����˫����)
	//char ch2 = 'abcdef';(�����ַ��ͱ���ʱ����������ֻ����һ���ַ�)

	//4.�ַ��ͱ�����ӦASCII����
	cout << (int)ch << endl;
	//֤���ڵײ�����ASCII����洢�Ķ�����ֱ�Ӽ�Ϊ'a'


	system("pause");

	return 0;
}