#include<iostream>
using namespace std;

int main(){
	int a[100];
	int n;
	cin >> n;
	for(int i =0; i < n; i++)
	{
		int val, count = 0;
		cin >> val;
		while (val > 0){
			if (val & 1 == 1){
				count++;
			}
			val = val >> 1;
		}
		a[i] = count;
	}
	for (int i = 0; i < n; i++){
		cout << a[i] << endl;
	}

}



//����
//����һ��ʮ��������N�������Ӧ2��������1�ĸ���
//
//����
//��һ��������ʾ��N��������ݣ����N���Ƕ�Ӧ�Ĳ������ݣ�ÿ��Ϊһ��������
//
//���
//N�У�ÿ�������Ӧһ�����롣
//
//��������
//4
//2
//100
//1000
//66
//
//�������
//1
//3
//6
//2