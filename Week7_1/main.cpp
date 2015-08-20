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

//年龄与疾病
//
//描述
//某医院想统计一下某项疾病的获得与否与年龄是否有关，需要对以前的诊断记录进行整理。
//
//输入
//共2行，第一行为过往病人的数目n（0 < n <= 100)，第二行为每个病人患病时的年龄。
//
//输出
//每个年龄段（分四段：18以下，19 - 35，36 - 60，60 - 注意看样例输出的格式）
//的患病人数占总患病人数的比例，以百分比的形式输出，精确到小数点后两位（double）。
//关于c++的格式化的输入输出，请参考：http://www.cplusplus.com/reference/iomanip。
//也可以在网上搜索一下，资料很多的。
//
//样例输入
//10
//1 11 21 31 41 51 61 71 81 91
//
//样例输出
//1 - 18: 20.00 %
//19 - 35 : 20.00 %
//36 - 60 : 20.00 %
//60 - : 40.00%
//
//提示
//输出%可以用下面的语句
//printf("%%");