#include <stdio.h>
#include <string.h>


class Product {
private:
	char name[64];
	char company[32];
	//포함 위의 class를 멤버변수로
	/*Date validto;*/
	int price;

public:
	//public에 설정하면 외부에서 사용가능하다
	class Date
	{
	protected:
		int year, month, day;
	public:
		Date(int y, int m, int d) { year = y; month = m; day = d; }
		void OutDate() { printf("%d/%d/%d\n", year, month, day); }
	};
	Date validto;

	Product(const char* aname, const char* acompany, int y, int m, int d, int aprice) : validto(y,m,d)
	{
		strcpy(name, aname);
		strcpy(company, acompany);
		price = aprice;
	}
	void OutProduct(){
		printf("이름: %s\n",name);
		printf("제조사: %s\n",company);
		printf("유효기간: ");
		validto.OutDate();
		printf("가격 : %d\n", price);
	}
};

int main() {
	
	Product shrimp("새우깡","농심",2020,8,15,1200);
	shrimp.OutProduct();
	Product::Date now(15, 23, 44);
	now.OutDate();

	return 0;
}