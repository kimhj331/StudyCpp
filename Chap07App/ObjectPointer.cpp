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
		printf("이름 = %s, 나이 = %d\n", name, age);
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
	//intro재정의
	void intro() {
		printf("%d학번 %s입니다.\n", stunum, name);
	}
	void study() {
		printf("이이는 사, 이삼은 육, 이사 팔\n");
	}
};

int main()
{
	Human h("김사람", 10);
	Student s("이학생", 15, 1234567);
	Human* pH;
	Student* pS;

	pH = &h;		// name, age <= name(김사람), age(10)
	pH->intro();
	pH = &s;
	pH->intro(); //기반이 되는 함수에 virtual을 붙이면 포인터가 가르키는 타입에 따라 호출할 함수를 결정한다.
	/*학생은 학생 intro, 사람은 사람 intro*/

	//pS = &Lee;		// 당연히 가능
	//pS->Human::intro();
	//pS->intro();

	//pH = &Lee;		// 가능
	////pS = &h;		// name(김사람), age(10), stunum(????) <= name(김사람), age(10) 타입변환 후에 사용가능


	//pS = (Student*)&kim;
	//pS->intro();

	return 0;
}

