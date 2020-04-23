#include <stdio.h>
#include <string.h>

//선언
class Fahrenheit;

class Celsius
{
public:
	double Tem;
	//초기화
	Celsius() {}
	Celsius(double aTem) : Tem(aTem) { }
	operator Fahrenheit();
	void OutTem() { printf("섭씨 = %.2f℃\n", Tem); }
};
class Fahrenheit
{
public:
	double Tem;
	//초기화
	Fahrenheit() { }
	Fahrenheit(double aTem) : Tem(aTem) { }

	//변환에 operator사용
	operator Celsius();
	void OutTem() { printf("화씨 = %.2f℉\n", Tem); }
};

//클래스 변환
Celsius::operator Fahrenheit()
{
	Fahrenheit F;
	F.Tem = Tem * 1.8 + 32;
	return F;
}

Fahrenheit::operator Celsius()
{
	Celsius C;
	C.Tem = (Tem - 32) / 1.8;
	return C;
}

int main()
{
	Celsius C(100);
	Fahrenheit F = C;
	C.OutTem();
	F.OutTem();

	printf("\n");
	Fahrenheit F2 = 120;
	Celsius C2 = F2;
	F2.OutTem();
	C2.OutTem();
}


