#include <stdio.h>

class Time {
private:
	int hour, min, sec;
public:
	Time() {};
	Time(int h, int m, int s) : hour(h), min(m), sec(s) { ; }
	void OutTime() {
		printf("%d:%d:%d\n", hour, min, sec);
	}
	const Time operator ++ ()	/*const 함수식 안의 변수들이 상수값이어야한다는 의미*/{
		sec++;
		min += sec / 60;
		sec %= 60;
		hour += min / 60;
		min %= 60;
		return *this;
	}
	const Time operator ++ (int dummy)	{
		
		Time t = *this;
		++* this;
		return t;
	}
};

int main() {
	Time t1(1, 1, 1);
	Time t2;

	t1.OutTime();
	t2 = ++t1;
	t1.OutTime();

	//t1할당후 1증가한다.
	t2 = t1++;
	t1.OutTime();
	t2.OutTime();

	int i, j;
	i = 1;
	j = i++;
	
}