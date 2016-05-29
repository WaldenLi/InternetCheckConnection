// InternetCheckConnection.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <wininet.h>

#pragma comment(lib,"Wininet.lib")

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	wchar_t url[128];
	memset(url,0,128);
	swprintf(url,L"%s",L"http://www.baidu.com");
	bool bConnect = InternetCheckConnection(url,FLAG_ICC_FORCE_CONNECTION,0);
	if (bConnect)
	{
		cout<<"Internet connect"<<endl;
	}
	else
	{
		cout<<"Internet Can't connect"<<endl;
	}
	getchar();
	return 0;

}

