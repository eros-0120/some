#include<iostream>
using namespace std;

int main() {

	//ѡ��ṹ Ƕ��if���
	/*
	�û���������������������600����Ϊ����һ������Ļ���
	����500���϶�������Ļ���
	����400������������Ļ���
	������Ϊδ���ϱ���
	*/
	/*
	��һ�������У��������700�֣����뱱��
	����650�֣������廪
	����600�����˴�
	*/

	int score = 0;
	cout << "������������� " << endl;
	cin >> score;
	cout << "������ķ���Ϊ�� " << score << endl;

	if (score > 600) 
	{
		cout << "��ϲ������һ����ѧ" << endl;
		if (score > 700)
		{
			cout << "���ܿ��뱱����ѧ" << endl;
		}
		else if (score > 650)
		{
			cout << "���ܿ����廪��ѧ" << endl;
		}
		else
		{
			cout << "���ܿ��������ѧ" << endl;
		}
	}
	else if(score>500)
	{
		cout << "��ϲ�����������ѧ" << endl;
	}
	else if (score > 400)
	{
		cout << "��ϲ������������ѧ" << endl;
	}
	else
	{
		cout << "δ���ϱ��ƣ����ٽ�����" << endl;
	}


	system("pause");

	return 0;
}