#include<iostream>
using namespace std;

int main() {
	//转义字符

	//换行符  \n
	cout << "helloworld!!\n" ;

	//反斜杠  \\

	cout << "\\" << endl;
	//打两个反斜杠才能输出一个


	//水平制表符 \t
	cout << "aaa\thelloworld" << endl;
	cout << "aa\thelloworld" << endl;
	cout << "aaaa\thelloworld" << endl;
	// \t共占8个空格，若有3个a则只剩五个空格，若有4个a则只剩四个空格，以此类推；
	//作用 可以整齐的输出后面的字符
	
	system("pause");

	return 0;
}