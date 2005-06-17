/*
 * Copyright (C) 2005 Mike McCormack
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __WINE_ODBCINST_H
#define __WINE_ODBCINST_H

#ifdef __cplusplus
extern "C" {
#endif

#include "sql.h"

BOOL WINAPI ODBCCPlApplet(LONG,LONG,LONG*,LONG*);
BOOL WINAPI SQLConfigDataSource(HWND,WORD,LPCSTR,LPCSTR);
BOOL WINAPI SQLConfigDataSourceW(HWND,WORD,LPCWSTR,LPCWSTR);
BOOL WINAPI SQLConfigDriver(HWND,WORD,LPCSTR,LPCSTR,LPSTR,WORD,WORD*);
BOOL WINAPI SQLConfigDriverW(HWND,WORD,LPCWSTR,LPCWSTR,LPWSTR,WORD,WORD*);
BOOL WINAPI SQLCreateDataSource(HWND,LPCSTR);
BOOL WINAPI SQLCreateDataSourceW(HWND,LPCWSTR);
BOOL WINAPI SQLGetConfigMode(UWORD*);
BOOL WINAPI SQLGetInstalledDrivers(LPSTR,WORD,WORD*);
BOOL WINAPI SQLGetInstalledDriversW(LPWSTR,WORD,WORD*);
int WINAPI SQLGetPrivateProfileString(LPCSTR,LPCSTR,LPCSTR,LPCSTR,int,LPCSTR);
int WINAPI SQLGetPrivateProfileStringW(LPCWSTR,LPCWSTR,LPCWSTR,LPCWSTR,int,LPCWSTR);
BOOL WINAPI SQLGetTranslator(HWND,LPSTR,WORD,WORD*,LPSTR,WORD,WORD*,DWORD*);
BOOL WINAPI SQLGetTranslatorW(HWND,LPWSTR,WORD,WORD*,LPWSTR,WORD,WORD*,DWORD*);
BOOL WINAPI SQLInstallDriverEx(LPCSTR,LPCSTR,LPSTR,WORD,WORD*,WORD,LPDWORD);
BOOL WINAPI SQLInstallDriverExW(LPCWSTR,LPCWSTR,LPWSTR,WORD,WORD*,WORD,LPDWORD);
BOOL WINAPI SQLInstallDriverManager(LPSTR,WORD,WORD*);
BOOL WINAPI SQLInstallDriverManagerW(LPWSTR,WORD,WORD*);
SQLRETURN WINAPI SQLInstallerError(WORD,DWORD*,LPSTR,WORD,WORD*);
SQLRETURN WINAPI SQLInstallerErrorW(WORD,DWORD*,LPWSTR,WORD,WORD*);
BOOL WINAPI SQLInstallTranslatorEx(LPCSTR,LPCSTR,LPSTR,WORD,WORD*,WORD,LPDWORD);
BOOL WINAPI SQLInstallTranslatorExW(LPCWSTR,LPCWSTR,LPWSTR,WORD,WORD*,WORD,LPDWORD);
BOOL WINAPI SQLInstallTranslator(LPCSTR,LPCSTR,LPCSTR,LPSTR,WORD,WORD*,WORD,LPDWORD);
BOOL WINAPI SQLInstallTranslatorW(LPCWSTR,LPCWSTR,LPCWSTR,LPWSTR,WORD,WORD*,WORD,LPDWORD);
BOOL WINAPI SQLManageDataSources(HWND hwnd);
SQLRETURN WINAPI SQLPostInstallerError(DWORD,LPCSTR);
SQLRETURN WINAPI SQLPostInstallerErrorW(DWORD,LPCWSTR);
BOOL WINAPI SQLReadFileDSN(LPCSTR,LPCSTR,LPCSTR,LPSTR,WORD,WORD*);
BOOL WINAPI SQLReadFileDSNW(LPCWSTR,LPCWSTR,LPCWSTR,LPWSTR,WORD,WORD*);
BOOL WINAPI SQLRemoveDefaultDataSource(void);
BOOL WINAPI SQLRemoveDriver(LPCSTR,BOOL,LPDWORD);
BOOL WINAPI SQLRemoveDriverW(LPCWSTR,BOOL,LPDWORD);
BOOL WINAPI SQLRemoveDriverManager(LPDWORD);
BOOL WINAPI SQLRemoveDSNFromIni(LPCSTR);
BOOL WINAPI SQLRemoveDSNFromIniW(LPCWSTR);
BOOL WINAPI SQLRemoveTranslator(LPCSTR,LPDWORD);
BOOL WINAPI SQLRemoveTranslatorW(LPCWSTR,LPDWORD);
BOOL WINAPI SQLSetConfigMode(UWORD);
BOOL WINAPI SQLValidDSN(LPCSTR);
BOOL WINAPI SQLValidDSNW(LPCWSTR);
BOOL WINAPI SQLWriteDSNToIni(LPCSTR,LPCSTR);
BOOL WINAPI SQLWriteDSNToIniW(LPCWSTR,LPCWSTR);
BOOL WINAPI SQLWriteFileDSN(LPCSTR,LPCSTR,LPCSTR,LPCSTR);
BOOL WINAPI SQLWriteFileDSNW(LPCWSTR,LPCWSTR,LPCWSTR,LPCWSTR);
BOOL WINAPI SQLWritePrivateProfileString(LPCSTR,LPCSTR,LPCSTR,LPCSTR);
BOOL WINAPI SQLWritePrivateProfileStringW(LPCWSTR,LPCWSTR,LPCWSTR,LPCWSTR);

#ifdef __cplusplus
}
#endif

#endif /*__WINE_ODBCINST_H*/
