#include<iostream>
using namespace std;

int main() {

	//选择结构 嵌套if语句
	/*
	用户输入分数，分数如果大于600分视为考上一本，屏幕输出
	大于500考上二本，屏幕输出
	大于400考上三本，屏幕输出
	其余视为未考上本科
	*/
	/*
	在一本分数中，如果大于700分，考入北大
	大于650分，考入清华
	大于600考入人大
	*/

	int score = 0;
	cout << "请您输入分数： " << endl;
	cin >> score;
	cout << "您输入的分数为： " << score << endl;

	if (score > 600) 
	{
		cout << "恭喜您考入一本大学" << endl;
		if (score > 700)
		{
			cout << "您能考入北京大学" << endl;
		}
		else if (score > 650)
		{
			cout << "您能考入清华大学" << endl;
		}
		else
		{
			cout << "您能考入人民大学" << endl;
		}
	}
	else if(score>500)
	{
		cout << "恭喜您考入二本大学" << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜您考入三本大学" << endl;
	}
	else
	{
		cout << "未考上本科，请再接再厉" << endl;
	}


	system("pause");

	return 0;
}