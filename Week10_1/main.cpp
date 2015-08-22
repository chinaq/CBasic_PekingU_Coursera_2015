#include<iostream>
#include<cstdio>
#include<cstring> 
using namespace std;

int main(){
	int ac, ec, ic, oc, uc;
	ac = ec = ic = oc = uc = 0;
	char a[80];
	gets_s(a);
	int len = strlen(a);
	for (int i = 0; i < len; i++){
		switch (a[i]){
		case 'a':
			ac++;
			break;
		case 'e':
			ec++;
			break;
		case 'i':
			ic++;
			break;
		case 'o':
			oc++;
			break;
		case 'u':
			uc++;
			break;
		}
	}
	cout << ac << " " << ec << " " << ic << " " << oc << " " << uc << endl;
}




//求字母的个数
//
//描述
//在一个字符串中找出元音字母a, e, i, o, u出现的次数。
//
//输入
//输入一行字符串（字符串中可能有空格，请用gets(s)方法把一行字符串输入到字符数组s中），字符串长度小于80个字符。
//
//输出
//输出一行，依次输出a, e, i, o, u在输入字符串中出现的次数，整数之间用空格分隔。
//
//样例输入
//If so, you already have a Google Account.You can sign in on the right.
//
//样例输出
//5 4 3 7 3
//
//提示
//注意，只统计小写元音字母a, e, i, o, u出现的次数。