#include<iostream>
using namespace std;

int main() {
	int score;
	int r;
	cin >> score;
	if (score >= 95)
		r = 1;
	else if (score >= 90)
		r = 2;
	else if (score >= 85)
		r = 3;
	else if (score >= 80)
		r = 4;
	else if (score >= 70)
		r = 5;
	else if (score >= 60)
		r = 6;
	else
		r = 7;

	cout << r << endl;
}




//�ɼ��ж�
//
//����
//����һ��0--100�ķ������жϷ�������ʲô�ȼ���
//95 <= ���� <= 100, ���1
//90 <= ����<95, ���2
//85 <= ����<90, ���3
//80 <= ����<85, ���4
//70 <= ����<80, ���5
//60 <= ����<70���6
//���� < 60; ���7.
//
//����
//n
//
//���
//m
//
//��������
//87
//
//�������
//3