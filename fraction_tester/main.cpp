#include<iostream>
#include<stdlib.h>
#include"../libmhle/fraction.h"
using namespace std;
int main() {
	cout << "����������������������\n"
		"������ʽ��a/b�����ŷ���ǰ����Ҫ���ո�)��\n";
	mhle::fraction f1, f2;
	cin >> f1 >> f2;
	cout << "f1:" << f1 << " f2:" << f2 << endl;
	cout << "add:" << f1 + f2 << endl;
	cout << "sub:" << f1 - f2 << endl;
	cout << "times:" << f1 * f2 << endl;
	try {
		cout << "devide:" << f1 / f2 << endl;
	}
	catch (std::exception e) {
		cout << "exception:" << e.what() << endl;
		system("pause");
		return -1;
	}
	mhle::fraction f3;
	cout << "f3:" << f3 << endl;
	cout << "f3+=f1=" << (f3 += f1) << endl;
	cout << "f3-=f2=" << (f3 -= f2) << endl;
	cout << "f3*=f1=" << (f3 *= f1) << endl;
	cout << "f3/=f2=" << (f3 /= f2) << endl;
	system("pause");
	return 0;
}