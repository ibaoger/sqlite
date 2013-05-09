// test.cpp : 定义控制台应用程序的入口点。
//

#include <stdio.h>
#include "../include/sqlite3.h"

int main(int argc, char* argv[])
{
	SQLite sqlite;
	sqlite3* pDB;

	sqlite.Open("../test.db3", &pDB);


	return 0;
}

