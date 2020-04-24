#include <stdio.h>
#include <string.h>

//부모 class
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
		printf("이름 %s, 나이 %d\n", name, age);
	}
};

//자식class
class Student : public Human {
protected:
	int StuNum;
public:
	Student(const char* aname, int aage, int aStuNum) : Human(aname, aage) {
		StuNum = aStuNum;
	}
	void study() {
		printf("이이는 사, 이삼은 육, 이사팔\n");
	}
	void report() {
		printf("이름 : %s, 나이 : %d세, 학번 : %d 보고서 제출\n", name, age, StuNum);
	}
	void intro() {
		printf("학번 : %d, 이름: %s\n", StuNum, name);
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
	void reserch() { printf("%s를 연구하고 논물을 쓴다\n",thesis); }
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

	//Human Kim("김희지", 25);
	//Kim.intro();

	//Student han("김한결", 15, 123456);
	////함수 재정의
	//han.Human::intro();
	//han.intro();
	//han.study();
	//han.report();
	Graduate Kim("김희지", 25, 201512979, "식품공학");
	Kim.intro();
	Kim.reserch();

	return 0;
}