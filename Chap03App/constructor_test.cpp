#include <stdio.h>
#include <string.h>

class Human
{
private: // ����������
	char name[12];
	int age;

public: //������
	Human(const char* aname, int aage) {
		strcpy(name, aname); //���ڿ�
		age = aage; //����
	}
	void intro()
	{
		printf("�̸�= %s,����= %d\n", name, age);
	}

};

int main() // private�� �Ӽ��� ���� �ְ������
{
	Human h = Human("������", 25); 

	/*������� ��� Human h = Human("������", 25);
	�Ͻ����� ��� Human h("������", 25);*/

	h.intro();

	return 0;
}