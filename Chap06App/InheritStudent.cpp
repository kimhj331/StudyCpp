#include <stdio.h>
#include <string.h>

//�θ� class
class Human {
protected:
	char name[12];
	int age;
public:
	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}
	void intro() {
		printf("�̸� %s, ���� %d\n", name, age);
	}
};

//�ڽ�class
class Student : public Human {
protected:
	int StuNum;
public:
	Student(const char* aname, int aage, int aStuNum) : Human(aname, aage) {
		StuNum = aStuNum;
	}
	void study() {
		printf("���̴� ��, �̻��� ��, �̻���\n");
	}
	void report() {
		printf("�̸� : %s, ���� : %d��, �й� : %d ���� ����\n", name, age, StuNum);
	}
	void intro() {
		printf("�й� : %d, �̸�: %s\n", StuNum, name);
	}

};
class Graduate : public Student {
protected:
	char thesis[40];
public:
	Graduate(const char* aname, int aage, int astunum, const char* athesis) :
		Student(aname, aage, astunum) {
		strcpy(thesis, athesis);
	}
	void reserch() { printf("%s�� �����ϰ� ���� ����\n",thesis); }
};
class Boxer :public Human {
protected:
	int height, weight;
public:
	Boxer(const char* aname, int aage, int aheight, int aweight) : Human(aname, aage)
	{
		height = aheight;
		weight = aweight;
	}
	void intro() {}
	void fight() {}

};

int main(){

	//Human Kim("������", 25);
	//Kim.intro();

	//Student han("���Ѱ�", 15, 123456);
	////�Լ� ������
	//han.Human::intro();
	//han.intro();
	//han.study();
	//han.report();
	Graduate Kim("������", 25, 201512979, "��ǰ����");
	Kim.intro();
	Kim.reserch();

	return 0;
}