#include<iostream>
using namespace std;

int main() {

	for (int i = 0; i < 100; i++) {
		//����������Ļ��������ż�������
		if (i % 2 == 0) {
			continue;//����ɸѡ������ִ�е��˾Ͳ�������ִ�У�Ȼ��ȥִ����һ��ѭ��
		}
		cout << i << endl;
	}
	system("pause");

	return 0;

}