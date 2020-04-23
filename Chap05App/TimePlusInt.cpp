#include <stdio.h>

class Time {
private:
	int hour, min, sec;
public:
	Time() { ; }

	//반환형은 const time ,들어오는 수도 상수로 바꿀 수 없음, 사용할 변수 또한 마찬가지
	Time(int h, int m, int s) : hour(h), min(m), sec(s) { ; }
	void OutTime() {
		printf("%d:%d:%d\n", hour, min, sec);
	}
	const Time operator +(int s)const {
		Time t = *this;

		t.sec += s;

		t.min += t.sec / 60;
		t.sec %= 60;
		t.hour += t.min / 60;
		t.min %= 60;

		return t;
		
	}
	const Time operator +(const Time& other)const {
		//일시적인 값 저장
		Time t;

		t.sec = sec + other.sec;
		t.min = min + other.min;
		t.hour = hour + other.hour;

		t.min += t.sec / 60;
		t.sec %= 60;
		t.hour += t.min / 60;
		t.min %= 60;

		return t;
	}
	const Time operator* (int s)const {
		Time t = *this;
		int tsec = t.hour*3600 + t.min * 60 + t.sec;

		tsec *= s;
		t.hour = tsec / 3600;
		t.min = (tsec /60)%60;
		t.sec = tsec % 60;
		return t;
	}
};
const Time operator+(int s, const Time& me)
{
	return (me + s);
}

int main() {
	Time t1(1, 40, 32), t2(2, 21, 33);
	Time t3;
	t3 = t1 + t2;
	t1.OutTime();
	t2.OutTime();
	t3.OutTime();

	Time now;
	now = t3 + 3;
	now.OutTime();

	Time cur(1, 20, 12);
	Time mul;
	mul = cur * 2;
	mul.OutTime();

	return 0;
}