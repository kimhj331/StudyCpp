#include <stdio.h>
#include <string.h>

class Human
{
private:
	char* pname;
	int age;

public:
	//�ʱ�ȭ
	Human() {
		pname = new char[1];
		pname[0] = NULL;
		age = 0;
	}

	Human(const char* aname, int aage) {
		pname = new char[strlen(aname) + 1];
		strcpy(pname, aname);
		age = aage;
	}
	//������ ���ÿ� ���� �Ű��ִ� �۾�
	Human(const Human& other) {
		pname = new char[strlen(other.pname) + 1];
		strcpy(pname, other.pname);
		age = other.age;
	}

	//���Կ�����
	Human operator =(const Human& other) {
		if (this != &other) {
			delete[] pname;
			pname = new char[strlen(other.pname) + 1];
			strcpy(pname, other.pname);
			age = other.age;
		}
		return *this;
	}
	~Human() {
		delete[] pname;
	}

	void intro()
	{
		printf("�̸� = %s, ���� = %d\n", pname, age);
	}
};

int main()
{
	Human kang("������", 1424);
	Human boy; //�����ϸ鼭 ���� �����ϴ°��� ����

	boy = kang; /*���� �س��� �����ϴ°��� error�߻� why? ���Կ����ڰ� ���� ������*/
	boy.intro();
}
