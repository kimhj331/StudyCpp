#include <stdio.h>
#include <string.h>

class Human {
private:
	char* name; //���� ���������� ��밡��
	int age;

public:
	Human(const char* aname, int aage) {
		name = new char[strlen(aname) + 1]; //�޸� �Ҵ�
		strcpy(name, aname);
		age = aage;
		printf("%s ��ü �����ڰ� ȣ��Ǿ����ϴ�.\n", name);
	}

	//�ı���
	~Human() {
		printf("%s ��ü�� �ı��Ǿ����ϴ�.\n", name);
		delete[] name; //���ڿ� ������(�޸� �Ҵ�) ����
	}

	void intro() {
		printf("�̸� = %s, ���� = %d\n", name, age);
	}
};

int main() {

	Human boy("����ѹ��ź��̿͵η��", 12);
	boy.intro();

	// ��ü�� ��������
	Human* leo= new Human("���������� ��ī������", 47);
	leo->intro();
	delete leo;

	return 0;
}