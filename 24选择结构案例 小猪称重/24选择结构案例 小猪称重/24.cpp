#include<iostream>
using namespace std;

int main() {

	int weightA = 0;//创建三只小猪的体重ABC
	cout << "请您输入小猪A的体重" << endl;//让用户输入小猪的重量
	cin >> weightA;
	cout << "您输入的小猪A的体重为： " << weightA << endl;


	int weightB = 0;
	cout << "请您输入小猪B的体重" << endl;
	cin >> weightB;
	cout << "您输入的小猪B的体重为： " << weightB << endl;


	int weightC = 0;
	cout << "请您输入小猪C的体重" << endl;
	cin >> weightC;
	cout << "您输入的小猪C的体重为： " << weightC << endl;

	if (weightA > weightB) {
		if (weightA > weightC) {
			cout << "小猪A的体重最重" << endl;
		}
		else {
			cout << "小猪C的体重最重" << endl;
		}
	}
	else {
		if (weightB > weightC) {
			cout << "小猪B的体重最重" << endl;
		}
		else {
			cout << "小猪C的体重最重" << endl;
		}
	}
	


	system("pause");

	return 0;
}