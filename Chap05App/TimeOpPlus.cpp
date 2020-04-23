#include <stdio.h>

class Time {
	friend const Time operator+(const Time& me, const Time& other);
private:
	int hour, min, sec;
public:
	Time() { ; }

	//��ȯ���� const time ,������ ���� ����� �ٲ� �� ����, ����� ���� ���� ��������
	Time(int h, int m, int s) : hour(h), min(m), sec(s) { ; }
	void OutTime() {
		printf("%d:%d:%d\n", hour, min, sec);
	}
};

const Time operator +(const Time& me, const Time& other) {
	//�Ͻ����� �� ����
	Time t;

	t.sec = me.sec + other.sec;
	t.min = me.min + other.min;
	t.hour = me.hour + other.hour;

	t.min += t.sec / 60;
	t.sec %= 60;
	t.hour += t.min / 60;
	t.min %= 60;

	return t;
}
int main() {
	Time t1(14, 19, 32), t2(17, 30, 00);
	Time t3;
	t3 = t1 + t2;
	t1.OutTime();
	t2.OutTime();
	t3.OutTime();
}