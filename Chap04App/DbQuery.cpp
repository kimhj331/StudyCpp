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
//여기서 DB서버에 접속
	hCon = 1234; //임의값
	puts("연결성공");
}

void DBQuery::DBDisConnect() {
	//접속해제
	hCon = NULL; //임의값
	puts("연결gowp");
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
	//필요한 DB실행
	Q1.RunQuery("select * from usertbl where userID='KBS'");

	DBQuery::DBDisConnect();
	return 0;
}