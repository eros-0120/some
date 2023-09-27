#include<iostream>
using namespace std;

int main() {

	//选择结构 多条件if语句
	/*
	输入一个考试分数，如果大于600份，视为考上一本大学，在屏幕输出
	大于500，视为考上二本大学，屏幕输出
	大于400，视为考上三本大学
	小于等于400分，视为未考上本科，屏幕上输出
	*/

	int score = 0;
	cout << "请输入您的分数： " << endl;
	cin >> score;
	cout << "您输入的分数是： " << score << endl;

	if (score > 600)
	{
		cout << "恭喜您考上一本大学" << endl;
	}
	else if (score > 500) 
	{
		cout << "恭喜您考上二本大学" << endl;
	}else if(score>400)
	{
		cout << "恭喜您考上三本大学" << endl;
	}
	else {
		cout << "遗憾您未考上大学" << endl;
	}



	system("pause");

	return 0;
}