#include <stdio.h>


//���� ��� �Լ�
class Simple
{
private:
	int value;
	static int count;
	
public:
	Simple() { count++; }
	~Simple() { count--; }

	//��������Լ� ��簴ü�� �������� �۾��� ó���Ѵ�.
	static void InitCount() {
		count = 0;
	}
	static void Outcount() {
		printf("���� ��ü ���� = %d\n", count);
	}
};

int Simple::count;

int main() 
{
	Simple::InitCount();
	Simple::Outcount();
	Simple s, *ps;
	//Simple s�� ī��Ʈ
	Simple::Outcount();
	//Simlpe�����Ϳ� �޸� �Ҵ�.
	ps = new Simple;
	Simple::Outcount();

	/*s.InitCount();
	s.Outcount();*/
	/*ps->InitCount();
	ps->Outcount();*/
	return 0;
}