#include<iostream>
using namespace std;

int main() {

	//switch���
	//����Ӱ���д��
	//10-9 ����
	//8-7 �ǳ���
	//6-5 һ��
	//5���� ��Ƭ

	//1.��ʾ�û�����Ӱ��������
	//2.�û���ʼ���д��
	//3.�����û�����ķ�������ʾ�û����Ľ��

	int score = 0;
	cout << "�����Ӱ���д��" << endl;
	cin >> score;
	cout << "����ķ���Ϊ�� " << score << endl;

	switch (score)
	{
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;//�˳���ǰ��֧
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;
	case 8:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case 7:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case 6:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;
	case 5:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;

	default:
		cout << "����Ϊ������Ƭ" << endl;
		break;
	}

	//if��switch����
	//switchȱ�㣬�ж�ʱ��ֻ�������ͻ��ַ��ͣ�������һ������
	//switch�ŵ㣬�ṹ������ִ��Ч�ʸ�



	system("pause");

	return 0;
}