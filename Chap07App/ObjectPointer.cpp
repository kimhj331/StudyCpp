#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

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
	Human h("�����", 45);
	Student s("������", 25, 201512979);
	Human* pH;
	Student* pS;

	int sel = 0;

	//pH = &h;		// name, age <= name(����), age(10)
	//pH->intro();
	//pH = &s;
	//pH->intro(); //����� �Ǵ� �Լ��� virtual�� ���̸� �����Ͱ� ����Ű�� Ÿ�Կ� ���� ȣ���� �Լ��� �����Ѵ�.
	///*�л��� �л� intro, ����� ��� intro*/

	//pS = (Student*)&h;
	//pS->intro();
	while (1)
	{
		cout << "���ϴ� ���� ������(1.Human, 2.Student, 9:����)";
		cin >> sel;
		if (sel == 1) {
			pH = &h;
			pH->intro();
		}
		else if (sel == 2) {
			pH = &s;
			pH->intro();
		}

		else if (sel == 9) {
			cout << "***�����մϴ�***" << endl;
			break;
		}
		else {
			cout << "�´� ���� �����ϴ�." << endl;
		}
	}


	return 0;
}

