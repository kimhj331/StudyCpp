#include <stdio.h>


//정적 멤버 함수
class Simple
{
private:
	int value;
	static int count;
	
public:
	Simple() { count++; }
	~Simple() { count--; }

	//정적멤버함수 모든객체에 공통적인 작업을 처리한다.
	static void InitCount() {
		count = 0;
	}
	static void Outcount() {
		printf("현재 객체 개수 = %d\n", count);
	}
};

int Simple::count;

int main() 
{
	Simple::InitCount();
	Simple::Outcount();
	Simple s, *ps;
	//Simple s만 카운트
	Simple::Outcount();
	//Simlpe포인터에 메모리 할당.
	ps = new Simple;
	Simple::Outcount();

	/*s.InitCount();
	s.Outcount();*/
	/*ps->InitCount();
	ps->Outcount();*/
	return 0;
}