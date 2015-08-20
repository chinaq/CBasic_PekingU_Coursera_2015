#include<iostream>
using namespace std;

int n, k;
int a[100];

int GetK(){
	for (int i = 0; i < n; i++){
		int count=0;
		int now = a[i];
		for (int j = 0; j < n; j++){
			if (a[j]>=now)
				count++;
		}
		if (count == k)
			return now;
	}
	return 0;
}


int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << GetK() << endl;
}



//找出第k大的数
//
//描述
//用户输入N和K，然后接着输入N个正整数（无序的），程序在不对N个整数排序的情况下，
//找出第K大的数。注意，第K大的数意味着从大到小排在第K位的数。
//并且，要求大家编写这个程序要用到自定义的函数。
//
//输入
//N
//K
//a1 a2 a3 a4 .....aN
//
//输出
//b
//
//样例输入
//5
//2
//32 3 12 5 89
//
//样例输出
//32