#include <stdio.h>


//관계 연산자
class Time {
private:
	int hour, min, sec;
public:
	Time() { ; }
	Time(int h, int m, int s) : hour(h), min(m), sec(s) { ; }
	void OutTime() {
		printf("%d:%d:%d\n", hour, min, sec);
	}
	// 결과는 true, false밖에 없으므로 const bool로 시작 하지 않아도 됨
	bool operator ==(const Time& other) const {
		return(hour == other.hour && min == other.min && sec == other.sec);
	}
	bool operator !=(const Time& other) const {
		return!(*this == other);
	}
	bool operator >(const Time& other) const {
		/*다음 논리식에 해당하지 않으면 다음으로 넘어감*/
		if (hour > other.hour) { return true; }
		if (hour < other.hour) { return false; }
		if (min > other.min) { return true; }
		if (min < other.min) { return false; }
		if (sec > other.sec) { return true; }
		if (sec < other.sec) { return false; }
		return false;
		/*Time t = *this;
		int left, right;

		left = t.hour * 3600 + t.min * 60 + t.sec;
		right = other.hour * 3600 + other.min * 60 + other.sec;

		return(left > right);*/
	}
	bool operator >=(const Time& other) const { return(*this == other || *this > other); }
	bool operator <(const Time& other) const { return!(	*this >= other); }
	bool operator <= (const Time& other) const { return!(*this>other); }

};
int main() {
	Time t1(15, 16, 56);
	Time t2(15, 16, 56);
	Time t3(17, 30, 00);

	(t1 == t2) ? printf("두 시간은 같다.\n"): printf("두 시간은 다르다.\n");
	(t1 > t2) ? printf("t1이 더 크다.\n") : printf("t1이 더 크지 않다.\n");
	(t1 < t3) ? printf("t3이 더 크다.\n") : printf("t3이 더 크지 않다.\n");
	(t1 >= t2) ? printf("t1이 더 크거나 같다.\n") : printf("t1이 더 작다.\n");
	
	return 0;
}