#include<iostream>
#include<cstdio>
#include<cstring> 
#include <iomanip>.
#include<cmath>
using namespace std;

int main(){
	double x[1000];
	double y[1000];
	double max = 0;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> x[i] >> y[i];
	}

	for (int i = 0; i < n - 1; i++){
		for (int j = i + 1; j < n; j++){
			double dis = sqrt(pow((x[i] - x[j]), 2) + pow((y[i] - y[j]), 2));
			if (dis > max)
				max = dis;
		}
	}
	cout << fixed << setprecision(4) << max << endl;
}



//��Զ����
//
//����
//����һ���(x, y)���������Զ��������֮��ľ��롣
//
//����
//��һ���ǵ���n��n���ڵ���2��
//����ÿһ�д���һ���㣬������������x y��ɡ�
//
//���
//���һ������Զ����֮��ľ��롣
//ʹ��cout << fixed << setprecision(4) << dis << endl; �������ֵ����ȷ��С�����4λ��
//fixed��setprecision����<iomanip>ͷ�ļ��ﶨ��ĸ�ʽ���Ʋ���������Ҫ#include <iomanip>.
//
//��������
//6
//34.0 23.0
//28.1 21.6
//14.7 17.1
//17.0 27.2
//34.7 67.1
//29.3 65.1
//
//�������
//53.8516
//
//��ʾ
//ע�����ڲ�����ʱ���ʹ��double���ͣ�������scanf��ȡ����ʱֻ����float���͵ı�����