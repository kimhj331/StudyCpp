#include <stdio.h>

class Human 
{
public: // 접근제한자
	char name[12];
	int age;

	void intro() 
	{
		printf("이름= %s,나이= %d\n", name, age);
	}

};

int main() 
{
	/*Human kim = { "김희지",25 };
	kim.intro();*/

	Human arFriend[10] = {
		{"문동욱",49},
		{"김유진",45},
		{"박상막",30}
	};

	Human* pFriend;
	
	for (int i = 0; i < 3; i++)
	{
		pFriend = &arFriend[i];
		pFriend->intro();
	}
	
	return 0;
}