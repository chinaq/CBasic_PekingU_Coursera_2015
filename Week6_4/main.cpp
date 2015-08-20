#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int maxOdd = 1;
	int minEven = 99;
	int num;
	for (int i = 0; i < 6; i++){
		cin >> num;
		if (num % 2 == 0 && num < minEven)
			minEven = num;
		else if (num % 2 == 1 && num > maxOdd)
			maxOdd = num;
	}
	int result = abs(maxOdd - minEven);
	cout << result << endl;
}




//最大奇数与最小偶数之差的绝对值

//描述
//输入6个正整数，且这6个正整数中至少存在一个奇数和一个偶数。
//设这6个正整数中最大的奇数为a，最小的偶数为b，求出 | a - b | 的值
//
//输入
//输入为一行，6个正整数, 且6个正整数都小于100
//输入保证这6个数中至少存在一个奇数和一个偶数
//
//输出
//输出为一行，输出最大的奇数与最小的偶数之差的绝对值
//
//样例输入
//1 2 3 4 5 6
//
//样例输出
//3