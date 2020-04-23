#include <stdio.h>

class MathCalc
{
private:
	static const double pie;

public:
	//������, const�� ��������� ��� �ʱ�ȭ
	MathCalc(){}
	void DoCalc(double r) {
		printf("������ %.2f�� ���� �ѷ� = %.3f\n", r, r * 2 * pie);
	}

};

const double MathCalc::pie = 3.1416;

int main()
{
	MathCalc m;
	m.DoCalc(2.2);
}