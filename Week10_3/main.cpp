#include<iostream>
#include<cstdio>
#include<cstring> 
using namespace std;

int main(){

	char a[500];
	char nowWord[500];
	string maxWord = "";

	nowWord[0] = '\0';
	int nowWordPos = -1;

	gets_s(a);
	int len = strlen(a);
	for (int i = 0; i < len; i++){
		nowWordPos++;
		if (a[i] == ' '){
			nowWord[nowWordPos] = '\0';
			if (strlen(nowWord) > maxWord.length())
				maxWord = nowWord;
			nowWordPos = -1;
		}
		else if (a[i] == '.'){
			nowWord[nowWordPos] = '\0';
			if (strlen(nowWord) > maxWord.length())
				maxWord = nowWord;
			break;
		}
		else{
			nowWord[nowWordPos] = a[i];
		}
	}
	cout << maxWord.c_str() << endl;
}





//描述
//一个以'.'结尾的简单英文句子，单词之间用空格分隔，没有缩写形式和其它特殊形式
//
//输入
//一个以'.'结尾的简单英文句子（长度不超过500），单词之间用空格分隔，没有缩写形式和其它特殊形式
//
//输出
//该句子中最长的单词。如果多于一个，则输出第一个
//
//样例输入
//I am a student of Peking University.
//
//样例输出
//University