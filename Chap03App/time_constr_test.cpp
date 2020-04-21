#include <stdio.h>

// ������ �����ε�
class Time {
private:
	int hour, min, sec;

public:
	//������ 1
	Time(int hour, int min, int sec) {
		this->hour = hour;
		this->min = min;
		this->sec = sec;
	}

	//������ 2
	Time(int hour, int min)
	{
		this->hour = hour;
		this->min = min;
		this->sec = 0;
	}
	
	//������ 3
	Time(int abssec)
	{
		this->hour = abssec/3600;
		this->min = (abssec/60) % 60;
		this->sec = abssec % 60;
	}

	void OutTime()
	{
		printf("���� �ð��� %2d:%2d:%2d �Դϴ�\n", this->hour, this->min, this->sec);
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