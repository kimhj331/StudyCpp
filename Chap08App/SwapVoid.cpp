#include <stdio.h>

template <typename T>
void Swap(T& a, T& b)
{
	T t;
	t = a; a = b; b = t;
}

T Add(T& a, T& b) {
	return a + b;
}

int main() {
	int a = 3, b = 4;
	double c = 1.2, d = 3.4;
	char e = 'A', f = 'B';

	Swap(a, b);
	Swap(c, d);
	Swap(e, f);

	printf("a = %d, b = %d\n", a, b);
	printf("c = %f, d = %f\n", c, d);
	printf("c = %f, d = %f\n", e, f);

	printf(" a + b = %d\n", Add(a, b));
	printf(" c + d = %f\n", Add(c, d));
	printf(" e + f = %f\n", Add(e, f));

	return 0;
}
