#include<iostream>
using namespace std;
//time系统时间头文件包含
#include<ctime>

int main() {

	/*
	添加随机数种子，作用利用当前系统时间生成随机数
	防止每次随机数都一样
	*/
	srand((unsigned int)time(NULL));


	//1.系统生成随机数
	int num = rand() % 100;//用rand生成随机数,%100表示生成0-99的随机数，
		      //%100+1表示生成1-100的随机数
	//cout << num << endl;//注释掉这段是因为不能上来就告诉他随机数


	//2.玩家进行猜测
	int val = 0;//玩家输入的数据
	cout << "请您输入数字" << endl;
	
	while (true)
	{
		cin >> val;
		cout << "您猜测的数字为： " << val << endl;


		//3.判断玩家的猜测
		if (val > num) {
			cout << "猜测过大" << endl;
		}
		else if (val < num) {
			cout << "猜测过小" << endl;
		}
		else {
			cout << "恭喜您猜对了" << endl;
			break;
		}

		//猜对 退出游戏
		//猜错 提示猜的结果 过大或者过小 重新返回第2步


	}
	system("pause");


	return 0;
}