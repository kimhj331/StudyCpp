#include <stdio.h>

class MathCalc
{
private:
	const double pie;

public:
	//생성자, const로 만들어지는 멤버 초기화
	MathCalc(double apie) : pie(apie) {}
	void DoCalc(double r) {
		printf("반지름 %.2f인 원의 둘레 = %.8f\n", r, r * 2 * pie);
	}

};

int main()
{
	MathCalc m(3.141592);
	m.DoCalc(5);
}