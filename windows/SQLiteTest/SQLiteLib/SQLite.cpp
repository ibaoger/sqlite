#include "SQLite.h"


SQLite::SQLite(void)
{
}

SQLite::~SQLite(void)
{
}

/**
 * 函数功能：打开/创建一个数据库
 * 参    数：pFileName	数据库名称
 *			ppDB		数据库句柄
 * 返 回 值：?
 **/
int SQLite::Open( const char *pFileName, sqlite3 **ppDB )
{
	if (NULL == pFileName)
	{
		//pNotify->OnOpenFailed(FILE_NAME_IS_NULL);
		//pNotify->OnCreateFailed(FILE_NAME_IS_NULL);
	}
	
	return sqlite3_open(pFileName, ppDB);
}

/**
 * 函数功能：打开/创建一个数据库
 * 参    数：pFileName	数据库名称
 *			ppDB		数据库句柄
 * 返 回 值：?
 **/
int SQLite::Open16( const void *pFileName, sqlite3 **ppDB )
{
	if (NULL == pFileName)
	{
		//pNotify->OnOpenFailed(FILE_NAME_IS_NULL);
		//pNotify->OnCreateFailed(FILE_NAME_IS_NULL);
	}

	return sqlite3_open16(pFileName, ppDB);
}

/**
 * 函数功能：打开/创建一个数据库
 * 参    数：pFileName	数据库名称
 *			ppDB		数据库句柄
 *			iFlags 
 *			pszVFS		要使用的VFS模块的名称
 * 返 回 值：?
 **/
int SQLite::Open_v2( const char *pFileName, sqlite3 **ppDB, int iFlags, const char *pszVFS )
{
	if (NULL == pFileName)
	{
		//pNotify->OnOpenFailed(FILE_NAME_IS_NULL);
		//pNotify->OnCreateFailed(FILE_NAME_IS_NULL);
	}

	return sqlite3_open_v2(pFileName, ppDB, iFlags, pszVFS);
}