#include<iostream>
using namespace std;

int main(){
	int n;
	string result[1000];
	float distance;
	cin >> n;
	for (int i = 0; i < n;i++){
		cin >> distance;
		float wTime = distance / 1.2;
		float bTime = 27.0 + 23.0 + distance / 3.0;
		if (wTime < bTime)
			result[i] = "Walk";
		else if (wTime == bTime)
			result[i] = "All";
		else
			result[i] = "Bike";
	}
	for (int i = 0; i < n; i++){
		cout << result[i].c_str() << endl;
	}
}


//ok


//�ﳵ����·
//
//����
//
//�ڱ���У԰��, û�����г�, �Ͽΰ��»�ܲ�����.
//��ʵ����, ����ȥ���κ����鶼���ﳵ��, ��Ϊ�ﳵ��Ҫ�ҳ���������ͣ����������, ��Ҫ����һЩʱ��.
//�����ҵ����г�, �������������г���ʱ��Ϊ27��; ͣ��������ʱ��Ϊ23��; 
//����ÿ������1.2��, �ﳵÿ������3.0��.���ж��߲�ͬ�ľ���ȥ����, ���ﳵ�컹����·��.
//
//����
//��һ��Ϊ����������ݵ�����n
//���ÿһ������Ϊһ�ΰ���Ҫ���ߵľ���, ��λΪ��.
//
//���
//��Ӧÿ������, ����ﳵ��, ���һ��"Bike"; �����·��, ���һ��"Walk"; ���һ����, ���һ��"All".
//
//��������
//4
//50
//90
//120
//180
//
//�������
//Walk
//Walk
//Bike
//Bike