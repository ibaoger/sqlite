/***************************************************************

 * 项  目：SQLite二次封装
 * 功  能：SQLite接口
 * 作  者：石硕
 * 日  期：2013-05-06
 * 版  权：Copyright (c) 2012-2013 Dream Company
 * 版  本：0.1.0_130506

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
