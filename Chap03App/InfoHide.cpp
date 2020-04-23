#include <stdio.h>

class Time
{
private: 
	int hour, min, sec;
public:
	
	Time(int h, int m, int s) 
	{
		SetHour(h);
		Setmin(m);
		Setsec(s);
	}
	int GetHour() { return hour; }
	void SetHour(int h) { 
		if (h >= 0 && h < 24) 
		{ hour = h; } 
		else
		{
			hour = 0;
		}
	}
	int Getmin() { return min; }
	void Setmin(int m) {
		if (m >= 0 && m < 60)
		{
			min = m;
		}
		else
		{
			min = 0;
		}
	}
	int Getsec() { return sec; }
	void Setsec(int s) {
		if (s >= 0 && s < 60)
		{
			sec = s;
		}
		else
		{
			sec = 0;
		}
	}

	void OutTime() {
		printf("���� �ð��� %d:%d:%d�Դϴ�\n", hour, min, sec); 
	}
	
};

int main()
{
	Time now(40, 2, 24);
	now.OutTime();

	int a;
	a = now.Getmin();
	printf("%d", a);

	
	return 0;
}