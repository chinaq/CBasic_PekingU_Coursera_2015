
#include<iostream>
#include<cstdio>
#include<cstring> 
using namespace std;

int main(){
	int n;
	while (cin >> n){
		if (n % 3 == 0 || n % 5 == 0 || n || 7 == 0){
			if (n % 3 == 0){
				cout << "3 ";
			}
			if (n % 5 == 0){
				cout << "5 ";
			}
			if (n % 7 == 0){
				cout << "7 ";
			}
		}
		else{
			cout << "n";
		}
		cout << endl;
	}

}



//�ܱ�3��5��7��������
//
//����
//����һ���������ж����ܷ�3��5��7�����������������Ϣ��
//1����ͬʱ��3��5��7������ֱ�����3 5 7��ÿ�����м�һ���ո񣩣�
//2���ܱ����������������������������С����ǰ������ں����磺3 5���� 3 7����5 7, �м��ÿո�ָ���
//3���ܱ�����һ����������������������
//4�����ܱ��κ��������������Сд�ַ�'n', ������������)
//
//����
//һ������
//
//���
//һ������, ��С��������, ����3, 5, 7��Ϊ������ĳ���������, �����м��ÿո����
//
//��������
//0
//5
//15
//105
//
//�������
//3 5 7
//5
//3 5
//3 5 7
