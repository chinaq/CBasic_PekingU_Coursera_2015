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




//�����������Сż��֮��ľ���ֵ

//����
//����6��������������6�������������ٴ���һ��������һ��ż����
//����6������������������Ϊa����С��ż��Ϊb����� | a - b | ��ֵ
//
//����
//����Ϊһ�У�6��������, ��6����������С��100
//���뱣֤��6���������ٴ���һ��������һ��ż��
//
//���
//���Ϊһ�У����������������С��ż��֮��ľ���ֵ
//
//��������
//1 2 3 4 5 6
//
//�������
//3