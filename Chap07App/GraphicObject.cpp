#include <stdio.h>

class Shape {
public:
	virtual void draw() = 0;/* { puts("���� ������Ʈ �Դϴ�."); }*/
};
class Line: public Shape {
public:
	virtual void draw() { puts("���� �߽��ϴ�."); }
};
class Circle : public Shape {
public:
	virtual void draw() { puts("���׶�� �׷ȴ� ġ��."); }
};
class Rect : public Shape {
public:
	virtual void draw() { puts("�̰� �簢�� �Դϴ�."); }
};
class Tri : public Shape {
	virtual void draw() { puts("�ﰢ���Դϴ�."); }
};
int main() {
	Shape* ar[] = { /*new Shape() ���������Լ�,*/ new Rect(), 
		new Circle(), new Tri(), new Line() }; //�Ҵ�

	printf("%d/%d\n", sizeof(ar), sizeof(ar[0]));

	for (int i = 0; i < sizeof(ar)/sizeof(ar[0]); i++)
	{
		ar[i]->draw();
	}
	//�θ� calss�� �Լ��� virtual�� ���̸� �ڽ� class�� draw()�Լ��� ����ȴ�

	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++)
	{
		delete ar[i]; //����
	}

	return 0;
}