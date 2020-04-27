#include <stdio.h>

//int N�� �������� ���� �� ����
template <typename T, int N>
class Array {
private:
	T ar[N];
public:
	//�迭�� n��° �ڸ��� v���� ����ִ´�
	void SetAt(int n, T v) {
		//�迭 �ȿ� ���ٸ�
		if (n < N && n >= 0) { ar[n] = v; }
	}
	//�迭�� n��° ���� �ҷ��´�
	T GetAt(int n) { return(n < N&& n >= 0) ? ar[n] : 0; }
};

int main() {
	Array<int, 5>ari;
	ari.SetAt(1, 1234);
	ari.SetAt(1000, 5678);
	for (int i = 0; i < 5; i++)
	{	//�ʱ�ȭ�� ���ϸ� �����Ⱚ�� �������
		printf("%d\n", ari.GetAt(i));
	}
	
	printf("%d\n",ari.GetAt(1000));
}