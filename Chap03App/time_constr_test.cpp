#include <stdio.h>

// 생성자 오버로딩
class Time {
private:
	int hour, min, sec;

public:
	//생성자 1
	Time(int hour, int min, int sec) {
		this->hour = hour;
		this->min = min;
		this->sec = sec;
	}

	//생성자 2
	Time(int hour, int min)
	{
		this->hour = hour;
		this->min = min;
		this->sec = 0;
	}
	
	//생성자 3
	Time(int abssec)
	{
		this->hour = abssec/3600;
		this->min = (abssec/60) % 60;
		this->sec = abssec % 60;
	}

	void OutTime()
	{
		printf("현재 시간은 %2d:%2d:%2d 입니다\n", this->hour, this->min, this->sec);
	}
};

int main(){

	Time now = Time(16,57,45);
	now.OutTime();
	Time sharp = Time(16, 58);
	sharp.OutTime();
	Time noon = Time(44000);
	noon.OutTime();
}