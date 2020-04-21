#include <stdio.h>
#include "cursor.h" //사용자용 커서는 쌍따옴표로 묶는다. 정의로 이동시 F12, Ctrl & - 는 이전으로

class RandNum
{
private:
	int num;

public:
	RandNum() { randomize(); }
	void Generate() { num = random(100) + 1; } //0부터 100까지의 값
	BOOL Compare(int input) {
		if (input == num) {
			printf("맞췄습니다.\n");
			return TRUE;
		}
		else if (input > num) {
			printf("입력한 숫자보다 더 작습니다.\n");
		}
		else {
			printf("입력한 숫자보다 더 큽니다.\n");
		}
		return FALSE;
	}
};

class Ask
{
private:
	int input; //입력받는 변수 

public:
	void Prompt() { printf("\n제가 만든 숫자를 맞춰 보세요.\n"); } // 생성자가 없다. input이라는 변수에 숫자를 받는 class
	BOOL AskNum() {
		printf("숫자를 입력하세요(끝낼 때는 999) : ");
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
	Ask A;// 클래스 선언 

	for (;;) {  // WHILE(1) 과 같음. 무한정 반복
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