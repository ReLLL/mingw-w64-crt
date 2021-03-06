/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef _UMX_H_
#define _UMX_H_

#include <_mingw_unicode.h>

#define UME_MENU_TEXT_LEN 50
#define UME_VERSION 0

#define UMS_LISTBOX_USERS 0
#define UMS_LISTBOX_GROUPS 1

#define UM_GETSELCOUNT (WM_USER + 1000)
#define UM_GETUSERSELA (WM_USER + 1001)
#define UM_GETUSERSELW (WM_USER + 1002)
#define UM_GETGROUPSELA (WM_USER + 1003)
#define UM_GETGROUPSELW (WM_USER + 1004)
#define UM_GETCURFOCUSA (WM_USER + 1005)
#define UM_GETCURFOCUSW (WM_USER + 1006)
#define UM_GETOPTIONS (WM_USER + 1007)
#define UM_GETOPTIONS2 (WM_USER + 1008)

#define UM_GETUSERSEL __MINGW_NAME_AW(UM_GETUSERSEL)
#define UM_GETGROUPSEL __MINGW_NAME_AW(UM_GETGROUPSEL)
#define UM_GETCURFOCUS __MINGW_NAME_AW(UM_GETCURFOCUS)

typedef struct _UMS_LOADMENUA {
  DWORD dwVersion;
  CHAR szMenuName[UME_MENU_TEXT_LEN + 1];
  HMENU hMenu;
  CHAR szHelpFileName[MAX_PATH];
  DWORD dwMenuDelta;
} UMS_LOADMENUA,*PUMS_LOADMENUA;

typedef struct _UMS_LOADMENUW {
  DWORD dwVersion;
  WCHAR szMenuName[UME_MENU_TEXT_LEN + 1];
  HMENU hMenu;
  WCHAR szHelpFileName[MAX_PATH];
  DWORD dwMenuDelta;
} UMS_LOADMENUW,*PUMS_LOADMENUW;

#define UMS_LOADMENU __MINGW_NAME_AW(UMS_LOADMENU)
#define PUMS_LOADMENU __MINGW_NAME_AW(PUMS_LOADMENU)

#define UM_SELTYPE_USER 0x10
#define UM_SELTYPE_NORMALUSER 0x1 | UM_SELTYPE_USER
#define UM_SELTYPE_REMOTEUSER 0x2 | UM_SELTYPE_USER
#define UM_SELTYPE_GROUP 0x20
#define UM_SELTYPE_LOCALGROUP 0x4 | UM_SELTYPE_GROUP
#define UM_SELTYPE_GLOBALGROUP 0x8 | UM_SELTYPE_GROUP

typedef struct _UMS_GETSELA {
  DWORD dwRID;
  LPSTR pchName;
  DWORD dwSelType;
  LPSTR pchFullName;
  LPSTR pchComment;
} UMS_GETSELA,*PUMS_GETSELA;

typedef struct _UMS_GETSELW {
  DWORD dwRID;
  LPWSTR pchName;
  DWORD dwSelType;
  LPWSTR pchFullName;
  LPWSTR pchComment;
} UMS_GETSELW,*PUMS_GETSELW;

#define UMS_GETSEL __MINGW_NAME_AW(UMS_GETSEL)
#define PUMS_GETSEL __MINGW_NAME_AW(PUMS_GETSEL)

typedef struct _UMS_GETSELCOUNT {
  DWORD dwItems;
} UMS_GETSELCOUNT,*PUMS_GETSELCOUNT;

#define UM_FOCUS_TYPE_DOMAIN 1
#define UM_FOCUS_TYPE_WINNT 2
#define UM_FOCUS_TYPE_LM 3
#define UM_FOCUS_TYPE_UNKNOWN 4

typedef struct _UMS_GETCURFOCUSA {
  CHAR szFocus[MAX_PATH];
  DWORD dwFocusType;
  CHAR szFocusPDC[MAX_PATH];
  PVOID psidFocus;
} UMS_GETCURFOCUSA,*PUMS_GETCURFOCUSA;

typedef struct _UMS_GETCURFOCUSW {
  WCHAR szFocus[MAX_PATH];
  DWORD dwFocusType;
  WCHAR szFocusPDC[MAX_PATH];
  PVOID psidFocus;
} UMS_GETCURFOCUSW,*PUMS_GETCURFOCUSW;

#define UMS_GETCURFOCUS __MINGW_NAME_AW(UMS_GETCURFOCUS)
#define PUMS_GETCURFOCUS __MINGW_NAME_AW(PUMS_GETCURFOCUS)

typedef struct _UMS_GETOPTIONS {
  WINBOOL fSaveSettingsOnExit;
  WINBOOL fConfirmation;
  WINBOOL fSortByFullName;
} UMS_GETOPTIONS,*PUMS_GETOPTIONS;

typedef struct _UMS_GETOPTIONS2 {
  WINBOOL fSaveSettingsOnExit;
  WINBOOL fConfirmation;
  WINBOOL fSortByFullName;
  WINBOOL fMiniUserManager;
  WINBOOL fLowSpeedConnection;
} UMS_GETOPTIONS2,*PUMS_GETOPTIONS2;

#define SZ_UME_UNLOADMENU "UMEUnloadMenu"
#define SZ_UME_INITIALIZEMENU "UMEInitializeMenu"
#define SZ_UME_REFRESH "UMERefresh"
#define SZ_UME_MENUACTION "UMEMenuAction"

#define SZ_UME_LOADMENUW "UMELoadMenuW"
#define SZ_UME_GETEXTENDEDERRORSTRINGW "UMEGetExtendedErrorStringW"
#define SZ_UME_CREATEW "UMECreateW"
#define SZ_UME_DELETEW "UMEDeleteW"
#define SZ_UME_RENAMEW "UMERenameW"

#define SZ_UME_LOADMENUA "UMELoadMenuA"
#define SZ_UME_GETEXTENDEDERRORSTRINGA "UMEGetExtendedErrorStringA"
#define SZ_UME_CREATEA "UMECreateA"
#define SZ_UME_DELETEA "UMEDeleteA"
#define SZ_UME_RENAMEA "UMERenameA"

#define SZ_UME_LOADMENU __MINGW_NAME_AW(SZ_UME_LOADMENU)
#define SZ_UME_GETEXTENDEDERRORSTRING __MINGW_NAME_AW(SZ_UME_GETEXTENDEDERRORSTRING)
#define SZ_UME_CREATE __MINGW_NAME_AW(SZ_UME_CREATE)
#define SZ_UME_DELETE __MINGW_NAME_AW(SZ_UME_DELETE)
#define SZ_UME_RENAME __MINGW_NAME_AW(SZ_UME_RENAME)

typedef DWORD (WINAPI *PUMX_LOADMENUW)(HWND hWnd,PUMS_LOADMENUW pumsload);
typedef DWORD (WINAPI *PUMX_LOADMENUA)(HWND hWnd,PUMS_LOADMENUA pumsload);

typedef LPWSTR (WINAPI *PUMX_GETEXTENDEDERRORSTRINGW)(VOID);
typedef LPSTR (WINAPI *PUMX_GETEXTENDEDERRORSTRINGA)(VOID);
typedef VOID (WINAPI *PUMX_UNLOADMENU)(VOID);
typedef VOID (WINAPI *PUMX_INITIALIZEMENU)(VOID);
typedef VOID (WINAPI *PUMX_REFRESH)(HWND hwndParent);
typedef VOID (WINAPI *PUMX_MENUACTION)(HWND hwndParent,DWORD dwEventId);
typedef VOID (WINAPI *PUMX_CREATEW)(HWND hwndParent,PUMS_GETSELW pumsSelection);
typedef VOID (WINAPI *PUMX_CREATEA)(HWND hwndParent,PUMS_GETSELA pumsSelection);
typedef VOID (WINAPI *PUMX_DELETEW)(HWND hwndParent,PUMS_GETSELW pumsSelection);
typedef VOID (WINAPI *PUMX_DELETEA)(HWND hwndParent,PUMS_GETSELA pumsSelection);
typedef VOID (WINAPI *PUMX_RENAMEW)(HWND hwndParent,PUMS_GETSELW pumsSelection,LPWSTR pchNewName);
typedef VOID (WINAPI *PUMX_RENAMEA)(HWND hwndParent,PUMS_GETSELA pumsSelection,LPSTR pchNewName);

#define PUMX_LOADMENU __MINGW_NAME_AW(PUMX_LOADMENU)
#define PUMX_GETEXTENDEDERRORSTRING __MINGW_NAME_AW(PUMX_GETEXTENDEDERRORSTRING)
#define PUMX_CREATE __MINGW_NAME_AW(PUMX_CREATE)
#define PUMX_DELETE __MINGW_NAME_AW(PUMX_DELETE)
#define PUMX_RENAME __MINGW_NAME_AW(PUMX_RENAME)

DWORD WINAPI UMELoadMenuA(HWND hwndMessage,PUMS_LOADMENUA pumsload);
DWORD WINAPI UMELoadMenuW(HWND hwndMessage,PUMS_LOADMENUW pumsload);
LPSTR WINAPI UMEGetExtendedErrorStringA(VOID);
LPWSTR WINAPI UMEGetExtendedErrorStringW(VOID);
VOID WINAPI UMEUnloadMenu(VOID);
VOID WINAPI UMEInitializeMenu(VOID);
VOID WINAPI UMERefresh(HWND hwndParent);
VOID WINAPI UMEMenuAction(HWND hwndParent,DWORD dwEventId);
VOID WINAPI UMECreateA(HWND hwndParent,PUMS_GETSELA pumsSelection);
VOID WINAPI UMECreateW(HWND hwndParent,PUMS_GETSELW pumsSelection);
VOID WINAPI UMEDeleteA(HWND hwndParent,PUMS_GETSELA pumsSelection);
VOID WINAPI UMEDeleteW(HWND hwndParent,PUMS_GETSELW pumsSelection);
VOID WINAPI UMERenameA(HWND hwndParent,PUMS_GETSELA pumsSelection,LPSTR pchNewName);
VOID WINAPI UMERenameW(HWND hwndParent,PUMS_GETSELW pumsSelection,LPWSTR pchNewName);
#endif
