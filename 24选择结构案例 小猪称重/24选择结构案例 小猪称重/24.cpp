#include<iostream>
using namespace std;

int main() {

	int weightA = 0;//������ֻС�������ABC
	cout << "��������С��A������" << endl;//���û�����С�������
	cin >> weightA;
	cout << "�������С��A������Ϊ�� " << weightA << endl;


	int weightB = 0;
	cout << "��������С��B������" << endl;
	cin >> weightB;
	cout << "�������С��B������Ϊ�� " << weightB << endl;


	int weightC = 0;
	cout << "��������С��C������" << endl;
	cin >> weightC;
	cout << "�������С��C������Ϊ�� " << weightC << endl;

	if (weightA > weightB) {
		if (weightA > weightC) {
			cout << "С��A����������" << endl;
		}
		else {
			cout << "С��C����������" << endl;
		}
	}
	else {
		if (weightB > weightC) {
			cout << "С��B����������" << endl;
		}
		else {
			cout << "С��C����������" << endl;
		}
	}
	


	system("pause");

	return 0;
}