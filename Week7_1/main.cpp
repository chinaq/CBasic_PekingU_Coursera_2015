#include<iostream>
#include <iomanip>
using namespace std;

int main() {
	int n;
	int age = 0;
	int u18 = 0;
	int s19_35 = 0;
	int s36_60 = 0;
	int s60 = 0;
	int all = 0;

	cin >> n;
	while (n--){
		cin >> age;
		if (age >=1 && age <= 18)
			u18++;
		else if (age >= 19 && age <= 35)
			s19_35++;
		else if (age >= 36 && age <= 60)
			s36_60++;
		else if (age > 60)
			s60++;
		all++;
	}
	cout << setprecision(2) << setiosflags(ios::fixed);
	cout << "1-18: " << (((double)u18 * 100) / (double)all) << "%" << endl;
	cout << "19-35: " << (((double)s19_35 * 100 / (double)all)) << "%" << endl;
	cout << "36-60: " << (((double)s36_60 * 100 / (double)all)) << "%" << endl;
	cout << "60-: " << (((double)s60 * 100 / (double)all)) << "%" << endl;
}

//�����뼲��
//
//����
//ĳҽԺ��ͳ��һ��ĳ����Ļ������������Ƿ��йأ���Ҫ����ǰ����ϼ�¼��������
//
//����
//��2�У���һ��Ϊ�������˵���Ŀn��0 < n <= 100)���ڶ���Ϊÿ�����˻���ʱ�����䡣
//
//���
//ÿ������Σ����ĶΣ�18���£�19 - 35��36 - 60��60 - ע�⿴��������ĸ�ʽ��
//�Ļ�������ռ�ܻ��������ı������԰ٷֱȵ���ʽ�������ȷ��С�������λ��double����
//����c++�ĸ�ʽ���������������ο���http://www.cplusplus.com/reference/iomanip��
//Ҳ��������������һ�£����Ϻܶ�ġ�
//
//��������
//10
//1 11 21 31 41 51 61 71 81 91
//
//�������
//1 - 18: 20.00 %
//19 - 35 : 20.00 %
//36 - 60 : 20.00 %
//60 - : 40.00%
//
//��ʾ
//���%��������������
//printf("%%");