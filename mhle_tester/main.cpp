#include<iostream>
#include"../libmhle/solver.h"
using namespace std;
int main() {
	int num,a;
	vector<int> vec, ans;
	cout << "�����뷽��δ֪����������";
	cin >> num;
	mhle::solver solver(num);
	for (int i = 1; i <= num; i++) {
		cout << "������� " << i << " �����̣���ʽ����δ֪������Ϊ3��2a-b=1 => 2 -1 0 1����" << endl;
		vec.clear();
		for (int i = 0; i < num + 1; i++) {
			cin >> a;
			vec.push_back(a);
		}
		solver.add_equations(vec.begin(), vec.end());
	}
	solver.solve(ans);
	cout << "���̵Ľ�Ϊ��";
	for (auto& i : ans)cout << i << " ";
	cout << endl;
	cin.get();
	return 0;
}