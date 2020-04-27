#include <stdio.h>


class Util {
public:
	template <typename T>
	void Swap(T& a, T& b) {
		T t;
		t = a; a = b; b = t;
	}
};


//template <typename T>
//T Add(T& a, T& b) {
//	return a + b;
//}

int main() {
	Util u;
	int a = 3, b = 4;
	double c = 1.2, d = 3.4;
	char e = 'A', f = 'B';

	u.Swap(a, b);
	u.Swap(c, d);
	u.Swap(e, f);

	printf("a = %d, b = %d\n", a, b);
	printf("c = %f, d = %f\n", c, d);
	printf("c = %f, d = %f\n", e, f);

	/*printf(" a + b = %d\n", Add(a, b));
	printf(" c + d = %f\n", Add(c, d));
	printf(" e + f = %f\n", Add(e, f));*/

	return 0;
}