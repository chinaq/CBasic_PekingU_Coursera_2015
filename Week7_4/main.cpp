#include<iostream>
using namespace std;

int main() {
	int total;
	int c100 = 0;
	int c50 = 0;
	int c20 = 0;
	int c10 = 0;
	int c5 = 0;
	int c1 = 0;
	int now;

	cin >> total;
	
	c100 = total / 100; 
	now = total % 100;

	c50 = now / 50;
	now = now % 50;
	
	c20 = now / 20;
	now = now % 20;

	c10 = now / 10;
	now = now % 10;

	c5 = now / 5;
	now = now % 5;

	c1 = now;

	cout << c100 << endl;
	cout << c50 << endl;
	cout << c20 << endl;
	cout << c10 << endl;
	cout << c5 << endl;
	cout << c1 << endl;
}





//�����֧��
//
//����
//�Ӽ�������һָ������ԪΪ��λ����345����Ȼ�����֧���ý��ĸ������������������
//��ʾ100Ԫ��50Ԫ��20Ԫ��10Ԫ��5Ԫ��1Ԫ�������ţ�Ҫ����ʹ�ô����ĳ�Ʊ��
//
//����
//һ��С��1000����������
//
//���
//������У�ÿ����ʾһ�����������ϵ��·ֱ��ʾ100Ԫ��50Ԫ��20Ԫ��10Ԫ��5Ԫ��1Ԫ����ҵ�����
//
//��������
//735
//
//�������
//7
//0
//1
//1
//1
//0