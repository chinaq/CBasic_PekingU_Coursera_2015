#include<cstdio>
#include<cstring> 
#include<iostream> 
using namespace std;

int main(){
	char a[80];
	char b[80];
	//gets(a);
	//gets(b);
	gets_s(a);
	gets_s(b);
	int lenA = strlen(a);
	int lenB = strlen(b);
	int lenMax = lenA > lenB ? lenA : lenB;
	for (int i = 0; i < lenMax; i++){
		a[i] = tolower(a[i]);
		b[i] = tolower(b[i]);
		if (a[i]>b[i]){
			cout << ">" << endl;
			return 0;
		}
		else if (a[i] < b[i]){
			cout << "<" << endl;
			return 0;
		}
	}
	cout << "=" << endl;
}





//���Դ�Сд�Ƚ��ַ�����С

//����
//һ��������strcmp�ɱȽ������ַ����Ĵ�С���ȽϷ���Ϊ�������ַ�����ǰ��������ַ���Ƚϣ���ASCII��ֵ��С�Ƚϣ���
//ֱ�����ֲ�ͬ���ַ�������'\0'Ϊֹ�����ȫ���ַ�����ͬ������Ϊ��ͬ��������ֲ���ͬ���ַ���
//���Ե�һ������ͬ���ַ��ıȽϽ��Ϊ׼��������Щʱ�����ǱȽ��ַ����Ĵ�Сʱ��ϣ��������ĸ�Ĵ�С��
//����"Hello"��"hello"�ں�����ĸ��Сдʱ����ȵġ���дһ������ʵ�ֶ������ַ������к�����ĸ��Сд�Ĵ�С�Ƚϡ�
//
//����
//����Ϊ���У�ÿ��һ���ַ������������ַ�����������gets¼��ÿ���ַ�������ÿ���ַ������ȶ�С��80��
//
//���
//�����һ���ַ����ȵڶ����ַ���С�����һ���ַ�"<"
//�����һ���ַ����ȵڶ����ַ��������һ���ַ�">"
//��������ַ�����ȣ����һ���ַ�"="
//
//��������
//Hello
//hello
//
//�������
//=