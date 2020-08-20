#include<iostream>
#include"../libmhle/solver.h"
using namespace std;
int main() {
	int num;
	vector<mhle::fraction> vec, ans;
	cout << "�����뷽��δ֪����������";
	cin >> num;
	mhle::solver solver(num);
	for (int i = 1; i <= num; i++) {
		cout << "������� " << i << " �����̣���ʽ����δ֪������Ϊ3��2a-b=1 => 2 -1 0 1����" << endl;
		vec.clear();
		mhle::fraction tmp;
		for (int i = 0; i < num + 1; i++) {
			cin >> tmp;
			vec.push_back(tmp);
		}
		try {
			solver.add_equations(vec.begin(), vec.end());
		}
		catch (std::exception e) {
			cout << "�����쳣��" << e.what() << endl;
			cin.get();
			return -1;
		}
	}
	try {
		solver.solve(ans);
		cout << "���̵Ľ�Ϊ��";
		for (auto& i : ans)cout << i << " ";
		cout << endl;
		cin.get();
	}
	catch(std::exception e){
		cout <<"�����쳣��"<< e.what() << endl;
		cin.get();
		return -1;
	}
	
	return 0;
}