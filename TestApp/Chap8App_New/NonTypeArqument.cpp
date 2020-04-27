#include <stdio.h>

//int N은 정수형만 받을 수 있음
template <typename T, int N>
class Array {
private:
	T ar[N];
public:
	//배열의 n번째 자리에 v값을 집어넣는다
	void SetAt(int n, T v) {
		//배열 안에 들어간다면
		if (n < N && n >= 0) { ar[n] = v; }
	}
	//배열의 n번째 값을 불러온다
	T GetAt(int n) { return(n < N&& n >= 0) ? ar[n] : 0; }
};

int main() {
	Array<int, 5>ari;
	ari.SetAt(1, 1234);
	ari.SetAt(1000, 5678);
	for (int i = 0; i < 5; i++)
	{	//초기화를 안하면 쓰레기값이 들어있음
		printf("%d\n", ari.GetAt(i));
	}
	
	printf("%d\n",ari.GetAt(1000));
}