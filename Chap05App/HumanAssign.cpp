#include <stdio.h>
#include <string.h>

class Human
{
private:
	char* pname;
	int age;

public:
	//초기화
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
	//생성과 동시에 값을 옮겨주는 작업
	Human(const Human& other) {
		pname = new char[strlen(other.pname) + 1];
		strcpy(pname, other.pname);
		age = other.age;
	}

	//대입연산자
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
		printf("이름 = %s, 나이 = %d\n", pname, age);
	}
};

int main()
{
	Human kang("강감찬", 1424);
	Human boy; //생성하면서 값을 대입하는것은 가능

	boy = kang; /*생성 해놓고 대입하는것은 error발생 why? 대입연산자가 없기 때문에*/
	boy.intro();
}
