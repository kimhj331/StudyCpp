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
	Human h("성명건", 45);
	Student s("김희지", 25, 201512979);
	Human* pH;
	Student* pS;

	int sel = 0;

	//pH = &h;		// name, age <= name(김사람), age(10)
	//pH->intro();
	//pH = &s;
	//pH->intro(); //기반이 되는 함수에 virtual을 붙이면 포인터가 가르키는 타입에 따라 호출할 함수를 결정한다.
	///*학생은 학생 intro, 사람은 사람 intro*/

	//pS = (Student*)&h;
	//pS->intro();
	while (1)
	{
		cout << "원하는 수를 고르세요(1.Human, 2.Student, 9:종료)";
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
			cout << "***종료합니다***" << endl;
			break;
		}
		else {
			cout << "맞는 수가 없습니다." << endl;
		}
	}


	return 0;
}

