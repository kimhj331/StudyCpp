#include <stdio.h>

#define MYSQLUSER "root"
#define MYSQLPASSWORD "mysql_p@ssw0rd"
#define MYSQLIP "192.168.0.155"

class DBQuery {
private:
	static int hCon;
	int nResult;
public:
	DBQuery() {};
	static void DBConnect(const char* Server, const char* ID, const char* pass);
	static void DBDisConnect();
	bool RunQuery(const char* SQL);

};


//static ����� ����ϱ����� ����
int DBQuery::hCon;

void DBQuery::DBConnect(const char* Server, const char* ID, const char* pass) {
//���⼭ DB������ ����
	/*MYSQL* hcon = mysql_init(NULL);*/
	hCon = 1234; //���ǰ�
	puts("���Ἲ��");
}

void DBQuery::DBDisConnect() {
	//��������
	hCon = NULL; //���ǰ�
	puts("��������");
}

bool DBQuery::RunQuery(const char* SQL) {
	//Query(hcon, SQL);
	puts(SQL);
	return true;
}

int main() {
	//static �Լ��� ���
	DBQuery::DBConnect("192.168.0.155", "root", "mysql_p@ssw0rd");
	/*DBQuery::DBConnect(MYSQLIP, MYSQLUSER, MYSQLPASSWORD);*/

	DBQuery Q1, Q2, Q3;
	//�ʿ��� DB����
	Q1.RunQuery("select * from usertbl where userID='KBS'");

	DBQuery::DBDisConnect();
	return 0;
}