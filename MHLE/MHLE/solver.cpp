#include "solver.h"
namespace mhle {
	int gcd(const int& a, const int& b) {
		return b ? gcd(b, a % b) : a;
	}

	int lcm(const int& a, const int& b) {
		return a * b / gcd(a, b);
	}

	mhle::solver::solver(int num) :
		equations(),
		m_num(num)
	{
	}
	void solver::add_equation(const std::vector<int>& equation)
	{
		//����������δ֪��������+1��ɱ��
		if (equation.size() != m_num + 1) {
			throw std::runtime_error("���̲�����");
			return;
		}

		int i = 0;		//�����±�
		int tmp = 0;	//�������

		//�ҵ���һ����Ϊ0��������������tmp
		//��ֹtmp�õ�0���º���ը��
		while (i < equation.size() && equation.at(i) == 0)++i;
		//����ܵ��׻�û�ҵ�һ����0�����²�һ��
		if (i == equation.size()) {
			throw std::runtime_error("�����ĸ����д��ȫ0����");
			return;
		}
		tmp = equation.at(i);

		//�ܵ��ף������С�������
		while (i < equation.size() && tmp != 1)
			if (equation.at(i))
				tmp = gcd(tmp, equation.at(i));

		equations.push_back(equation);
		//һ��һ����
		if (tmp != 1)for (auto& i : equations.back())if (i)i /= tmp;
	}
	void solvex(std::vector<std::vector<int> > equations) {

	}
	void solver::solve(std::vector<int>& answer)
	{
		
	}
}
