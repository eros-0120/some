#include<iostream>
using namespace std;
//timeϵͳʱ��ͷ�ļ�����
#include<ctime>

int main() {

	/*
	�����������ӣ��������õ�ǰϵͳʱ�����������
	��ֹÿ���������һ��
	*/
	srand((unsigned int)time(NULL));


	//1.ϵͳ���������
	int num = rand() % 100;//��rand���������,%100��ʾ����0-99���������
		      //%100+1��ʾ����1-100�������
	//cout << num << endl;//ע�͵��������Ϊ���������͸����������


	//2.��ҽ��в²�
	int val = 0;//������������
	cout << "������������" << endl;
	
	while (true)
	{
		cin >> val;
		cout << "���²������Ϊ�� " << val << endl;


		//3.�ж���ҵĲ²�
		if (val > num) {
			cout << "�²����" << endl;
		}
		else if (val < num) {
			cout << "�²��С" << endl;
		}
		else {
			cout << "��ϲ���¶���" << endl;
			break;
		}

		//�¶� �˳���Ϸ
		//�´� ��ʾ�µĽ�� ������߹�С ���·��ص�2��


	}
	system("pause");


	return 0;
}