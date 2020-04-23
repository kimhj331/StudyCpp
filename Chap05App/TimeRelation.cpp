#include <stdio.h>


//���� ������
class Time {
private:
	int hour, min, sec;
public:
	Time() { ; }
	Time(int h, int m, int s) : hour(h), min(m), sec(s) { ; }
	void OutTime() {
		printf("%d:%d:%d\n", hour, min, sec);
	}
	// ����� true, false�ۿ� �����Ƿ� const bool�� ���� ���� �ʾƵ� ��
	bool operator ==(const Time& other) const {
		return(hour == other.hour && min == other.min && sec == other.sec);
	}
	bool operator !=(const Time& other) const {
		return!(*this == other);
	}
	bool operator >(const Time& other) const {
		/*���� ���Ŀ� �ش����� ������ �������� �Ѿ*/
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

	(t1 == t2) ? printf("�� �ð��� ����.\n"): printf("�� �ð��� �ٸ���.\n");
	(t1 > t2) ? printf("t1�� �� ũ��.\n") : printf("t1�� �� ũ�� �ʴ�.\n");
	(t1 < t3) ? printf("t3�� �� ũ��.\n") : printf("t3�� �� ũ�� �ʴ�.\n");
	(t1 >= t2) ? printf("t1�� �� ũ�ų� ����.\n") : printf("t1�� �� �۴�.\n");
	
	return 0;
}