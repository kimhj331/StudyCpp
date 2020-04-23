#include <stdio.h>
#include <string.h>

class Human {
private:
	char* name; //���� ���������� ��밡��
	int age;

public:
	Human(const char* name, int age) {
		this->name = new char[strlen(name) + 1]; //�޸� �Ҵ�
		strcpy(this->name, name);
		this->age = age;
		printf("%s ��ü �����ڰ� ȣ��Ǿ����ϴ�.\n", this->name);
	}

//�ı���
	~Human() {
		printf("%s ��ü�� �ı��Ǿ����ϴ�.\n", this->name);
		delete[] this->name; //���ڿ� ������(�޸� �Ҵ�) ����
	}

	void intro() {
		printf("�̸� = %s, ���� = %d\n", this->name, this->age);
	}
};

int main() {

	Human woman("������", 25);
	woman.intro();

	// ��ü�� ��������
	Human* leo;
	leo = new Human("���������� ��ī������", 40);
	leo->intro();
	delete leo;

	return 0;
}