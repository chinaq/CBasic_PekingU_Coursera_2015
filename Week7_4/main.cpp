#include<iostream>
using namespace std;

int main() {
	int total;
	int c100 = 0;
	int c50 = 0;
	int c20 = 0;
	int c10 = 0;
	int c5 = 0;
	int c1 = 0;
	int now;

	cin >> total;
	
	c100 = total / 100; 
	now = total % 100;

	c50 = now / 50;
	now = now % 50;
	
	c20 = now / 20;
	now = now % 20;

	c10 = now / 10;
	now = now % 10;

	c5 = now / 5;
	now = now % 5;

	c1 = now;

	cout << c100 << endl;
	cout << c50 << endl;
	cout << c20 << endl;
	cout << c10 << endl;
	cout << c5 << endl;
	cout << c1 << endl;
}





//人民币支付
//
//描述
//从键盘输入一指定金额（以元为单位，如345），然后输出支付该金额的各种面额的人民币数量，
//显示100元，50元，20元，10元，5元，1元各多少张，要求尽量使用大面额的钞票。
//
//输入
//一个小于1000的正整数。
//
//输出
//输出分行，每行显示一个整数，从上到下分别表示100元，50元，20元，10元，5元，1元人民币的张数
//
//样例输入
//735
//
//样例输出
//7
//0
//1
//1
//1
//0