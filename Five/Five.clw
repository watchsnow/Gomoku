; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CFiveDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "five.h"
LastPage=0

ClassCount=9
Class1=CChatEdit
Class2=CClientDlg
Class3=CFiveApp
Class4=CFiveDlg
Class5=CFiveSocket
Class6=CServerDlg

ResourceCount=7
Resource1=IDD_DLG_CLIENT
Resource2=IDD_DLG_ABOUT
Resource3=IDD_DLG_SERVER
Resource4=IDD_FIVE_DIALOG
Class7=CNameDlg
Resource5=IDD_DLG_NAME
Class8=CStatDlg
Resource6=IDD_DLG_STAT
Class9=CAboutDlg
Resource7=IDR_MENU

[CLS:CChatEdit]
Type=0
BaseClass=CEdit
HeaderFile=ChatEdit.h
ImplementationFile=ChatEdit.cpp
LastObject=CChatEdit

[CLS:CClientDlg]
Type=0
BaseClass=CDialog
HeaderFile=ClientDlg.h
ImplementationFile=ClientDlg.cpp

[CLS:CFiveApp]
Type=0
BaseClass=CWinApp
HeaderFile=Five.h
ImplementationFile=Five.cpp
Filter=N
VirtualFilter=AC

[CLS:CFiveDlg]
Type=0
BaseClass=CDialog
HeaderFile=FiveDlg.h
ImplementationFile=FiveDlg.cpp
LastObject=ID_MENU_ABOUT
Filter=D
VirtualFilter=dWC

[CLS:CFiveSocket]
Type=0
BaseClass=CAsyncSocket
HeaderFile=FiveSocket.h
ImplementationFile=FiveSocket.cpp
LastObject=CFiveSocket

[CLS:CServerDlg]
Type=0
BaseClass=CDialog
HeaderFile=ServerDlg.h
ImplementationFile=ServerDlg.cpp

[DLG:IDD_DLG_CLIENT]
Type=1
Class=CClientDlg
ControlCount=7
Control1=IDC_STATIC,static,1342308352
Control2=IDC_STATIC,static,1342308352
Control3=IDC_EDIT_HOST,edit,1350631552
Control4=IDC_STATIC,button,1342177287
Control5=IDC_BTN_CONNECT,button,1476460545
Control6=IDC_BTN_OUT,button,1342242816
Control7=IDC_ST_TIMER,static,1342308352

[DLG:IDD_FIVE_DIALOG]
Type=1
Class=CFiveDlg
ControlCount=9
Control1=IDC_BTN_HQ,button,1342242816
Control2=IDC_BTN_BACK,button,1342242816
Control3=IDC_BTN_LOST,button,1342242816
Control4=IDC_ST_ENEMY,static,1342308353
Control5=IDC_ST_ME,static,1342308353
Control6=IDC_EDT_CHAT,edit,1352730628
Control7=IDC_STATIC,static,1342308352
Control8=IDC_CMB_CHAT,combobox,1344339970
Control9=IDC_STATIC,static,1342177283

[DLG:IDD_DLG_SERVER]
Type=1
Class=CServerDlg
ControlCount=9
Control1=IDC_STATIC,static,1342308352
Control2=IDC_STATIC,static,1342308352
Control3=IDC_EDIT_HOST,edit,1350633600
Control4=IDC_STATIC,static,1342308352
Control5=IDC_EDIT_IP,edit,1350633600
Control6=IDC_STATIC,button,1342177287
Control7=IDC_BTN_LISTEN,button,1342242817
Control8=IDC_BTN_LEAVE,button,1342242816
Control9=IDC_ST_STATUS,static,1342308352

[MNU:IDR_MENU]
Type=1
Class=?
Command1=ID_MENU_1P
Command2=ID_MENU_PC
Command3=ID_MENU_SERVER
Command4=ID_MENU_CLIENT
Command5=ID_MENU_PLAYAGAIN
Command6=ID_MENU_LEAVE
Command7=ID_MENU_EXIT
Command8=ID_MENU_NAME
Command9=ID_MENU_STAT
Command10=ID_MENU_ABOUT
CommandCount=10

[DLG:IDD_DLG_NAME]
Type=1
Class=CNameDlg
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT_NAME,edit,1350631552

[CLS:CNameDlg]
Type=0
HeaderFile=NameDlg.h
ImplementationFile=NameDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CNameDlg
VirtualFilter=dWC

[DLG:IDD_DLG_STAT]
Type=1
Class=CStatDlg
ControlCount=12
Control1=IDOK,button,1342242817
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_ST_NAME,static,1342308352
Control7=IDC_ST_WIN,static,1342308352
Control8=IDC_ST_DRAW,static,1342308352
Control9=IDC_ST_LOST,static,1342308352
Control10=IDC_STATIC,button,1342177287
Control11=IDC_ST_PERCENT,static,1342308353
Control12=IDC_BTN_RESET,button,1342242816

[CLS:CStatDlg]
Type=0
HeaderFile=StatDlg.h
ImplementationFile=StatDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CStatDlg

[DLG:IDD_DLG_ABOUT]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDC_STATIC,static,1342177283
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352

[CLS:CAboutDlg]
Type=0
HeaderFile=AboutDlg.h
ImplementationFile=AboutDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CAboutDlg

