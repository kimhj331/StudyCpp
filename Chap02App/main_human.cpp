#include <stdio.h>

class Human 
{
public: // ����������
	char name[12];
	int age;

	void intro() 
	{
		printf("�̸�= %s,����= %d\n", name, age);
	}

};

int main() 
{
	/*Human kim = { "������",25 };
	kim.intro();*/

	Human arFriend[10] = {
		{"������",49},
		{"������",45},
		{"�ڻ�",30}
	};

	Human* pFriend;
	
	for (int i = 0; i < 3; i++)
	{
		pFriend = &arFriend[i];
		pFriend->intro();
	}
	
	return 0;
}