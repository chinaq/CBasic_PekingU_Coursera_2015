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



//�ҳ���k�����
//
//����
//�û�����N��K��Ȼ���������N��������������ģ��������ڲ���N���������������£�
//�ҳ���K�������ע�⣬��K�������ζ�ŴӴ�С���ڵ�Kλ������
//���ң�Ҫ���ұ�д�������Ҫ�õ��Զ���ĺ�����
//
//����
//N
//K
//a1 a2 a3 a4 .....aN
//
//���
//b
//
//��������
//5
//2
//32 3 12 5 89
//
//�������
//32