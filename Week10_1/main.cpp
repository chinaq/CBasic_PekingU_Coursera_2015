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




//����ĸ�ĸ���
//
//����
//��һ���ַ������ҳ�Ԫ����ĸa, e, i, o, u���ֵĴ�����
//
//����
//����һ���ַ������ַ����п����пո�����gets(s)������һ���ַ������뵽�ַ�����s�У����ַ�������С��80���ַ���
//
//���
//���һ�У��������a, e, i, o, u�������ַ����г��ֵĴ���������֮���ÿո�ָ���
//
//��������
//If so, you already have a Google Account.You can sign in on the right.
//
//�������
//5 4 3 7 3
//
//��ʾ
//ע�⣬ֻͳ��СдԪ����ĸa, e, i, o, u���ֵĴ�����