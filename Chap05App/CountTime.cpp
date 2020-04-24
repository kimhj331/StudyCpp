#include <iostream>
#include <stdio.h>
using namespace std;

class Time
{
	//istream은 입력을 위한 class
	//ostream은 출력을 위한 class
	friend ostream& operator<<(ostream& c, const Time& T);
	friend ostream& operator<<(ostream& c, const Time* pT);
private:
	int hour, min, sec;

public:
	Time() { }
	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
	void OutTime() {
		printf("%d:%d:%d\n", hour, min, sec);
	}
};

ostream& operator<<(ostream& c, const Time& T)
{
	c << T.hour << ":" << T.min << ":" << T.sec;
	return c;
}
ostream& operator<<(ostream& c, const Time* pT)
{
	c << *pT;
	return c;
}



int main() {
	Time now(10, 22, 5);
	Time* pLunchTime = new Time(12, 30, 0);

	cout << "현재 시간은"<< now << "입니다"<<endl;
	cout << "점심 시간은" << pLunchTime << "입니다."<<endl; //포인터값이 출력됨
	delete pLunchTime;
	return 0;
}