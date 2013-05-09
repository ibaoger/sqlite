#include "SQLite.h"


SQLite::SQLite(void)
{
}

SQLite::~SQLite(void)
{
}

/**
 * �������ܣ���/����һ�����ݿ�
 * ��    ����pFileName	���ݿ�����
 *			ppDB		���ݿ���
 * �� �� ֵ��?
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
 * �������ܣ���/����һ�����ݿ�
 * ��    ����pFileName	���ݿ�����
 *			ppDB		���ݿ���
 * �� �� ֵ��?
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
 * �������ܣ���/����һ�����ݿ�
 * ��    ����pFileName	���ݿ�����
 *			ppDB		���ݿ���
 *			iFlags 
 *			pszVFS		Ҫʹ�õ�VFSģ�������
 * �� �� ֵ��?
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