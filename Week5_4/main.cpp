#include<iostream>
using namespace std;

int main(){
	int a[100];
	int n;
	cin >> n;
	for(int i =0; i < n; i++)
	{
		int val, count = 0;
		cin >> val;
		while (val > 0){
			if (val & 1 == 1){
				count++;
			}
			val = val >> 1;
		}
		a[i] = count;
	}
	for (int i = 0; i < n; i++){
		cout << a[i] << endl;
	}

}



//描述
//给定一个十进制整数N，求其对应2进制数中1的个数
//
//输入
//第一个整数表示有N组测试数据，其后N行是对应的测试数据，每行为一个整数。
//
//输出
//N行，每行输出对应一个输入。
//
//样例输入
//4
//2
//100
//1000
//66
//
//样例输出
//1
//3
//6
//2