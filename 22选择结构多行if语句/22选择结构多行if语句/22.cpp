#include<iostream>
using namespace std;

int main() {

	//ѡ��ṹ ������if���
	/*
	����һ�����Է������������600�ݣ���Ϊ����һ����ѧ������Ļ���
	����500����Ϊ���϶�����ѧ����Ļ���
	����400����Ϊ����������ѧ
	С�ڵ���400�֣���Ϊδ���ϱ��ƣ���Ļ�����
	*/

	int score = 0;
	cout << "���������ķ����� " << endl;
	cin >> score;
	cout << "������ķ����ǣ� " << score << endl;

	if (score > 600)
	{
		cout << "��ϲ������һ����ѧ" << endl;
	}
	else if (score > 500) 
	{
		cout << "��ϲ�����϶�����ѧ" << endl;
	}else if(score>400)
	{
		cout << "��ϲ������������ѧ" << endl;
	}
	else {
		cout << "�ź���δ���ϴ�ѧ" << endl;
	}



	system("pause");

	return 0;
}