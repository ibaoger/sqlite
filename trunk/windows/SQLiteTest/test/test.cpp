// test.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include <stdio.h>
#include "../SQLiteLib/SQLite.h"

int main(int argc, char* argv[])
{
	SQLite sqlite;
	sqlite3* pDB;

	sqlite.Open("../test.db3", &pDB);


	return 0;
}

