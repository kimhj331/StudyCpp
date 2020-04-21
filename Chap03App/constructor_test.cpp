#include <stdio.h>
#include <string.h>

class Human
{
private: // 접근제한자
	char name[12];
	int age;

public: //생성자
	Human(const char* aname, int aage) {
		strcpy(name, aname); //문자열
		age = aage; //숫자
	}
	void intro()
	{
		printf("이름= %s,나이= %d\n", name, age);
	}

};

int main() // private인 속성에 값을 넣고싶을때
{
	Human h = Human("김희지", 25); 

	/*명시적인 방법 Human h = Human("김희지", 25);
	암시적인 방법 Human h("김희지", 25);*/

	h.intro();

	return 0;
}