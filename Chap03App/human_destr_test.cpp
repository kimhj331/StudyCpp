#include <stdio.h>
#include <string.h>

class Human {
private:
	char* name; //길이 가변적으로 사용가능
	int age;

public:
	Human(const char* name, int age) {
		this->name = new char[strlen(name) + 1]; //메모리 할당
		strcpy(this->name, name);
		this->age = age;
		printf("%s 객체 생성자가 호출되었습니다.\n", this->name);
	}

//파괴자
	~Human() {
		printf("%s 객체가 파괴되었습니다.\n", this->name);
		delete[] this->name; //문자열 포인터(메모리 할당) 해제
	}

	void intro() {
		printf("이름 = %s, 나이 = %d\n", this->name, this->age);
	}
};

int main() {

	Human woman("김희지", 25);
	woman.intro();

	// 객체의 동적생성
	Human* leo;
	leo = new Human("레오나르도 디카프리오", 40);
	leo->intro();
	delete leo;

	return 0;
}