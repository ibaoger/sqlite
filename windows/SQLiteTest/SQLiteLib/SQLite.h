/***************************************************************

 * ��  Ŀ��SQLite���η�װ
 * ��  �ܣ�SQLite�ӿ�
 * ��  �ߣ�ʯ˶
 * ��  �ڣ�2013-05-06
 * ��  Ȩ��Copyright (c) 2012-2013 Dream Company
 * ��  ����0.1.0_130506

***************************************************************/

#pragma once
#ifndef _SQLITE_H_
#define _SQLITE_H_


#include "sqlite3.h"
#include "def.h"


class SQLite
{
public:
	SQLite(void);
	~SQLite(void);

public:
	int SQLite::Open( const char *pFileName, sqlite3 **ppDB );
	int SQLite::Open16( const void *pFileName, sqlite3 **ppDB );
	int SQLite::Open_v2( const char *pFileName, sqlite3 **ppDB, int iFlags, const char *pszVFS );
};


#endif  //_SQLITE_H_
