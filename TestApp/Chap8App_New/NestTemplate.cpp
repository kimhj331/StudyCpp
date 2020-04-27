#include <iostream>
#include "cursor.h"
using namespace std;

template <typename T>
class PosValue {
private:
	int x, y;
	T value;
public:
	PosValue():x(0), y(0), value(0) {}
	PosValue(int ax, int ay, T av) : x(ax), y(ay), value(av) { ; }
	void outValue() {
		gotoxy(x, y);
		cout << value << endl;
	}
};

template<typename T>
class Wrapper {
private:
	T member;
public:
	Wrapper() { ; }
	void set(T v) { member = v; }
	T get() { return member; }

};

int main() {
	Wrapper<PosValue<char>> wrap;
	wrap.set(PosValue<char>(10, 10, 'a'));
	//T=PosValue<char>
	PosValue<char> pc = wrap.get();
	pc.outValue();
}