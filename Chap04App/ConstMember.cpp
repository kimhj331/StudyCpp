#include <stdio.h>

class MathCalc
{
private:
	const double pie;

public:
	//������, const�� ��������� ��� �ʱ�ȭ
	MathCalc(double apie) : pie(apie) {}
	void DoCalc(double r) {
		printf("������ %.2f�� ���� �ѷ� = %.8f\n", r, r * 2 * pie);
	}

};

int main()
{
	MathCalc m(3.141592);
	m.DoCalc(5);
}