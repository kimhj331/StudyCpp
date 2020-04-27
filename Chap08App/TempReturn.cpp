#include <stdio.h>

template<typename T>
T max(T a, T b) {
	return (a > b) ? a : b;
}

template<typename T>
T cast(int s) {
	return (T)s;
}
int main() {
	int a = max(1, 2);
	double b = max(1.1, 2.2);
	//어떤 형으로 돌려받을것인지를 정해야한다.
	/*int c = <int>max(2, 3.14);
	double c = <double>max(2, 3.14);*/
	double c = max(cast<unsigend>)(2, 3.14);

	printf("c=%.2f\n", c);
}