#include <stdio.h>

class MathCalc
{
private:
	static const double pie;

public:
	//생성자, const로 만들어지는 멤버 초기화
	MathCalc(){}
	void DoCalc(double r) {
		printf("반지름 %.2f인 원의 둘레 = %.3f\n", r, r * 2 * pie);
	}

};

const double MathCalc::pie = 3.1416;

int main()
{
	MathCalc m;
	m.DoCalc(2.2);
}