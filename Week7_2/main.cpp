#include<iostream>
using namespace std;

int main() {
	int score;
	int r;
	cin >> score;
	if (score >= 95)
		r = 1;
	else if (score >= 90)
		r = 2;
	else if (score >= 85)
		r = 3;
	else if (score >= 80)
		r = 4;
	else if (score >= 70)
		r = 5;
	else if (score >= 60)
		r = 6;
	else
		r = 7;

	cout << r << endl;
}




//成绩判断
//
//描述
//输入一个0--100的分数，判断分数代表什么等级。
//95 <= 分数 <= 100, 输出1
//90 <= 分数<95, 输出2
//85 <= 分数<90, 输出3
//80 <= 分数<85, 输出4
//70 <= 分数<80, 输出5
//60 <= 分数<70输出6
//分数 < 60; 输出7.
//
//输入
//n
//
//输出
//m
//
//样例输入
//87
//
//样例输出
//3