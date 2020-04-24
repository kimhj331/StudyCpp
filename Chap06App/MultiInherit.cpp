#include <stdio.h>
#include <conio.h>


//다중상속
class Date
{
protected:
	int year, month, day;
public:
	Date(int y, int M, int d) { year = y; month = M; day = d; }
	void OutDate() { printf("%d/%d/%d", year, month, day); }
};

class Time
{
protected:
	int hour, min, sec;
public:
	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
	void OutTime() { printf("%d:%d:%d", hour, min, sec); }
};

class DateTime :public Date, public Time {
private:
	bool bEngMessage;
	int millisec;
public:
	DateTime(int y, int M, int d, int h, int m, int s,
		int ms, bool b = false) : Date(y,M,d),Time(h,m,s), millisec(ms), bEngMessage(b) {}
	void OutNow() {
		printf(bEngMessage ? "Now is " : "지금은 ");
		OutDate();
		putch(' ');
		OutTime();
		printf(".%d", millisec);
		puts(bEngMessage ? "." : "입니다.");
	}
		
};

int main()
{
	DateTime now(2017, 6, 29, 12, 30, 58, 99, false);
	now.OutNow();

	return 0;
}