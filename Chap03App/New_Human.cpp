#include <stdio.h>
#include <string.h>

class Human {
private:
	char* name; //길이 가변적으로 사용가능
	int age;

public:
	Human(const char* aname, int aage) {
		name = new char[strlen(aname) + 1]; //메모리 할당
		strcpy(name, aname);
		age = aage;
		printf("%s 객체 생성자가 호출되었습니다.\n", name);
	}

	//파괴자
	~Human() {
		printf("%s 객체가 파괴되었습니다.\n", name);
		delete[] name; //문자열 포인터(메모리 할당) 해제
	}

	void intro() {
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};

int main() {

	Human boy("김수한무거북이와두루미", 12);
	boy.intro();

	// 객체의 동적생성
	Human* leo= new Human("레오나르도 디카프리오", 47);
	leo->intro();
	delete leo;

	return 0;
}