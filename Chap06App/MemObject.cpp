#include <stdio.h>
#include <string.h>


class Product {
private:
	char name[64];
	char company[32];
	//���� ���� class�� ���������
	/*Date validto;*/
	int price;

public:
	//public�� �����ϸ� �ܺο��� ��밡���ϴ�
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
		printf("�̸�: %s\n",name);
		printf("������: %s\n",company);
		printf("��ȿ�Ⱓ: ");
		validto.OutDate();
		printf("���� : %d\n", price);
	}
};

int main() {
	
	Product shrimp("�����","���",2020,8,15,1200);
	shrimp.OutProduct();
	Product::Date now(15, 23, 44);
	now.OutDate();

	return 0;
}