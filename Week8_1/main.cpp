#include<iostream>
using namespace std;

int main(){ 
	int standard;
	int input;
	int result = 0;
	//int a[5];
	cin >> standard;
	for (int i = 0; i < 5; i++){
		cin >> input;
		if (input < standard){
			result += input;
		}
	}
	cout << result;
}


//ok







//数字求和
//
//描述
//给定一个正整数a，以及另外的5个正整数，问题是：这5个整数中，小于a的整数的和是多少？
//
//输入
//输入一行，只包括6个小于100的正整数，其中第一个正整数就是a。
//
//输出
//输出一行，给出一个正整数，是5个数中小于a的数的和。
//
//样例输入
//10 1 2 3 4 11
//
//样例输出
//10