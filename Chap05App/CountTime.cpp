#include <iostream>
#include <stdio.h>
using namespace std;

class Time
{
	//istream�� �Է��� ���� class
	//ostream�� ����� ���� class
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

	cout << "���� �ð���"<< now << "�Դϴ�"<<endl;
	cout << "���� �ð���" << pLunchTime << "�Դϴ�."<<endl; //�����Ͱ��� ��µ�
	delete pLunchTime;
	return 0;
}