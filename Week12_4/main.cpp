#include<iostream>
#include<cstdio>
#include<cstring> 
#include <iomanip>.
#include<cmath>
using namespace std;

int main(){
	int a;
	int b;
	char op;
	cin >> a >> b >> op;
	if (op == '+'){
		cout << a + b << endl;
	}
	else if (op == '-'){
		cout << a - b << endl;
	}
	else if (op == '*'){
		cout << a*b << endl;
	}
	else if (op == '/'){
		if (b == 0){
			cout << "Divided by zero!" << endl;
		}
		else{
			cout << a / b << endl;
		}
	}
	else{
		cout << "Invalid operator!" << endl;
	}

}


//�򵥼�����
//
//����
//һ����򵥵ļ�������֧�� + , -, *, / �������㡣���迼���������Ϊ��������������ݺ����������ᳬ��int��ʾ�ķ�Χ��
//
//����
//����ֻ��һ�У������������������е�1��2������Ϊ��������3������Ϊ�������� + , -, *, / ����
//
//���
//���ֻ��һ�У�һ��������Ϊ��������Ȼ����
//1. ������ֳ���Ϊ0��������������Divided by zero!
//2. ���������Ч�Ĳ�����(����Ϊ + , -, *, / ֮һ�����������Invalid operator!
//
//��������
//1 2 +
//
//�������
//3
//
//��ʾ
//���Կ���ʹ��if��switch�ṹ��