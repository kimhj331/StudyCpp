#include <stdio.h>
#include <string.h>

//����
class Fahrenheit;

class Celsius
{
public:
	double Tem;
	//�ʱ�ȭ
	Celsius() {}
	Celsius(double aTem) : Tem(aTem) { }
	operator Fahrenheit();
	void OutTem() { printf("���� = %.2f��\n", Tem); }
};
class Fahrenheit
{
public:
	double Tem;
	//�ʱ�ȭ
	Fahrenheit() { }
	Fahrenheit(double aTem) : Tem(aTem) { }

	//��ȯ�� operator���
	operator Celsius();
	void OutTem() { printf("ȭ�� = %.2f��\n", Tem); }
};

//Ŭ���� ��ȯ
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


