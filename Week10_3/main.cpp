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





//����
//һ����'.'��β�ļ�Ӣ�ľ��ӣ�����֮���ÿո�ָ���û����д��ʽ������������ʽ
//
//����
//һ����'.'��β�ļ�Ӣ�ľ��ӣ����Ȳ�����500��������֮���ÿո�ָ���û����д��ʽ������������ʽ
//
//���
//�þ�������ĵ��ʡ��������һ�����������һ��
//
//��������
//I am a student of Peking University.
//
//�������
//University