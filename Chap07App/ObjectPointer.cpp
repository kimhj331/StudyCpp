#include <stdio.h>
#include <string.h>

class Human
{
protected:
	char name[12];
	int age;

public:
	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}
	virtual void intro() {
		printf("�̸� = %s, ���� = %d\n", name, age);
	}
};

class Student : public Human
{
protected:
	int stunum;

public:
	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
		stunum = astunum;
	}
	//intro������
	void intro() {
		printf("%d�й� %s�Դϴ�.\n", stunum, name);
	}
	void study() {
		printf("���̴� ��, �̻��� ��, �̻� ��\n");
	}
};

int main()
{
	Human h("����", 10);
	Student s("���л�", 15, 1234567);
	Human* pH;
	Student* pS;

	pH = &h;		// name, age <= name(����), age(10)
	pH->intro();
	pH = &s;
	pH->intro(); //����� �Ǵ� �Լ��� virtual�� ���̸� �����Ͱ� ����Ű�� Ÿ�Կ� ���� ȣ���� �Լ��� �����Ѵ�.
	/*�л��� �л� intro, ����� ��� intro*/

	//pS = &Lee;		// �翬�� ����
	//pS->Human::intro();
	//pS->intro();

	//pH = &Lee;		// ����
	////pS = &h;		// name(����), age(10), stunum(????) <= name(����), age(10) Ÿ�Ժ�ȯ �Ŀ� ��밡��


	//pS = (Student*)&kim;
	//pS->intro();

	return 0;
}

