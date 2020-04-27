#include <stdio.h>

class Shape {
public:
	virtual void draw() = 0;/* { puts("도형 오브젝트 입니다."); }*/
};
class Line: public Shape {
public:
	virtual void draw() { puts("선을 긋습니다."); }
};
class Circle : public Shape {
public:
	virtual void draw() { puts("동그라미 그렸다 치고."); }
};
class Rect : public Shape {
public:
	virtual void draw() { puts("이건 사각형 입니다."); }
};
class Tri : public Shape {
	virtual void draw() { puts("삼각형입니다."); }
};
int main() {
	Shape* ar[] = { /*new Shape() 순수가상함수,*/ new Rect(), 
		new Circle(), new Tri(), new Line() }; //할당

	printf("%d/%d\n", sizeof(ar), sizeof(ar[0]));

	for (int i = 0; i < sizeof(ar)/sizeof(ar[0]); i++)
	{
		ar[i]->draw();
	}
	//부모 calss의 함수에 virtual을 붙이면 자식 class의 draw()함수가 실행된다

	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++)
	{
		delete ar[i]; //해제
	}

	return 0;
}