#include<iostream>
using namespace std;

int main() {


	//1.��ӡ���е���λ��
	int num =100;

	do {
		//2.��������λ�������ҵ�ˮ�ɻ���
		int a=0;//num�ĸ�λ��
		int b=0; //num��ʮλ��
		int c=0;//num�İ�λ��

		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;

		if (num == a * a * a + b * b * b + c * c * c) //�����ˮ�ɻ����Ŵ�ӡ
		{
			cout << num << endl;
			
		}
		num++;
	} while (num < 1000);

	
	
	


	system("pause");

	return 0;
}