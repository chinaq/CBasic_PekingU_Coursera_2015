#include<iostream>
using namespace std;

int main(){ 
	int standard;
	int input;
	int result = 0;
	//int a[5];
	cin >> standard;
	for (int i = 0; i < 5; i++){
		cin >> input;
		if (input < standard){
			result += input;
		}
	}
	cout << result;
}


//ok







//�������
//
//����
//����һ��������a���Լ������5���������������ǣ���5�������У�С��a�������ĺ��Ƕ��٣�
//
//����
//����һ�У�ֻ����6��С��100�������������е�һ������������a��
//
//���
//���һ�У�����һ������������5������С��a�����ĺ͡�
//
//��������
//10 1 2 3 4 11
//
//�������
//10