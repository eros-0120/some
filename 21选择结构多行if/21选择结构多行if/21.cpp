#include<iostream>
using namespace std;

int main() {

	//选择结构 多行if语句
	//输入考试分数，如果分数大于600，视为考上一本大学，在屏幕上输出
	//如果没考上一本，则打印未考上一本大学


	int score = 0;
	cout << "请您输入考试分数" << endl;
	cin >> score;
	cout << "您输入的分数为： " << score << endl;

	if (score > 600)
	{
		cout << "恭喜您考上一本大学" << endl;
	}
	else {
		cout << "未考上一本大学" << endl;
	}

	system("pause");

	return 0;
}