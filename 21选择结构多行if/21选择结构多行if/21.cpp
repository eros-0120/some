#include<iostream>
using namespace std;

int main() {

	//ѡ��ṹ ����if���
	//���뿼�Է����������������600����Ϊ����һ����ѧ������Ļ�����
	//���û����һ�������ӡδ����һ����ѧ


	int score = 0;
	cout << "�������뿼�Է���" << endl;
	cin >> score;
	cout << "������ķ���Ϊ�� " << score << endl;

	if (score > 600)
	{
		cout << "��ϲ������һ����ѧ" << endl;
	}
	else {
		cout << "δ����һ����ѧ" << endl;
	}

	system("pause");

	return 0;
}