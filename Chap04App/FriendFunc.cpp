#include <stdio.h>

class Date;
class Time {
	//프렌드 함수 선언
	friend void OutToday(Date&, Time&);
private:
	int hour, min, sec;
public:
	Time(int h, int m, int s) {
		if (h >= 0 && h < 24) { hour = h; } else { hour = 0;}
		if (m >= 0 && m < 60) { min = m; } else { min = 0;}
		if (s >= 0 && s < 60) { sec = s; } else { sec = 0;}
	}
};

class Date {
	friend void OutToday(Date&, Time&);
private:
	int year, mon, day;
public:
	Date(int y, int m, int d) {
		year = y;
		if (m >= 0 && m <= 12) { mon = m; }
		if (d >= 0 && d <= 31) { day = d; }
	}
};

void OutToday(Date& d, Time& t) {
	printf("%d년 %d월 %d일 / %d시 %d분 %d초\n", 
		d.year, d.mon, d.day, t.hour, t.min, t.sec);
}

int main() {
	Time t(15,23,35);
	Date d(2020, 4, 22);
	OutToday(d,t);
	return 0;
}