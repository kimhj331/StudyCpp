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

int DBQuery::hCon;

void DBQuery::DBConnect(const char* Server, const char* ID, const char* pass) {
//���⼭ DB������ ����
	hCon = 1234; //���ǰ�
	puts("���Ἲ��");
}

void DBQuery::DBDisConnect() {
	//��������
	hCon = NULL; //���ǰ�
	puts("����gowp");
}

bool DBQuery::RunQuery(const char* SQL) {
	//Query(hcon, SQL);
	puts(SQL);
	return true;
}

int main() {
	DBQuery::DBConnect("192.168.0.155", "root", "mysql_p@ssw0rd");
	/*DBQuery::DBConnect(MYSQLIP, MYSQLUSER, MYSQLPASSWORD);*/

	DBQuery Q1, Q2, Q3;
	//�ʿ��� DB����
	Q1.RunQuery("select * from usertbl where userID='KBS'");

	DBQuery::DBDisConnect();
	return 0;
}