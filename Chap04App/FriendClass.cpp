#include <stdio.h>

class Date;
class Time {
	friend class Date;
private:
	int hour, min, sec;
public:
	Time(int h, int m, int s) {
		if (h >= 0 && h < 24) { hour = h; }
		else { hour = 0; }
		if (m >= 0 && m < 60) { min = m; }
		else { min = 0; }
		if (s >= 0 && s < 60) { sec = s; }
		else { sec = 0; }
	}
};

class Date {
private:
	int year, mon, day;
public:
	Date(int y, int m, int d) {
		year = y;
		if (m >= 0 && m <= 12) { mon = m; }
		if (d >= 0 && d <= 31) { day = d; }
	}
	void Getdate()
	{
		printf("%d년 %d월 %d일",year, mon, day);
	}
	void OutToday(Time& t) {
		printf("%d년 %d월 %d일 / %d시 %d분 %d초\n",
			year, mon, day, t.hour, t.min, t.sec);
	}
};



int main() {
	Date d(2020, 04, 22);
	Time t(15, 53, 40);
	d.OutToday(t);
	d.Getdate();

	return 0;
}