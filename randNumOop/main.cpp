#include <stdio.h>
#include "cursor.h" //����ڿ� Ŀ���� �ֵ���ǥ�� ���´�. ���Ƿ� �̵��� F12, Ctrl & - �� ��������

class RandNum
{
private:
	int num;

public:
	RandNum() { randomize(); }
	void Generate() { num = random(100) + 1; } //0���� 100������ ��
	BOOL Compare(int input) {
		if (input == num) {
			printf("������ϴ�.\n");
			return TRUE;
		}
		else if (input > num) {
			printf("�Է��� ���ں��� �� �۽��ϴ�.\n");
		}
		else {
			printf("�Է��� ���ں��� �� Ů�ϴ�.\n");
		}
		return FALSE;
	}
};

class Ask
{
private:
	int input; //�Է¹޴� ���� 

public:
	void Prompt() { printf("\n���� ���� ���ڸ� ���� ������.\n"); } // �����ڰ� ����. input�̶�� ������ ���ڸ� �޴� class
	BOOL AskNum() {
		printf("���ڸ� �Է��ϼ���(���� ���� 999) : ");
		scanf("%d", &input);
		if (input == 999) {
			return TRUE;
		}
		return FALSE;
	}
	int GetInput() { return input; }
};

int main()
{
	RandNum R;
	Ask A;// Ŭ���� ���� 

	for (;;) {  // WHILE(1) �� ����. ������ �ݺ�
		R.Generate();
		A.Prompt();
		for (;;) {
			if (A.AskNum()) {
				exit(EXIT_SUCCESS);
			}
			if (R.Compare(A.GetInput())) {
				break;
			}
		}
	}

}