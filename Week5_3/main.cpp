#include<iostream>
using namespace std;

int main(){
	int n;
	int k;
	int count1 = 0;
	int count5 = 0;
	int count10 = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> k;
		if (k == 1)
			count1++;
		else if (k == 5){
			count5++;
		}
		else if (k == 10){
			count10++;
		}
	}
	cout << count1 << endl;
	cout << count5 << endl;
	cout << count10 << endl;
}


//整数的个数
//
//描述
//给定k（1<k<100）个正整数，其中每个数都是大于等于1，小于等于10的数。
//写程序计算给定的k个正整数中，1，5和10出现的次数。
//
//输入
//输入有两行：第一行包含一个正整数k，第二行包含k个正整数，每两个正整数用一个空格分开。
//
//输出
//输出有三行，第一行为1出现的次数，，第二行为5出现的次数，第三行为10出现的次数。
//
//样例输入
//5
//1 5 8 10 5
//
//样例输出
//1
//2
//1
