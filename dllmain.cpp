// dllmain.cpp : Definiert den Einstiegspunkt für die DLL-Anwendung.

#include <Windows.h>

#include "CCheat.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		CreateThread( 0, 0, ( LPTHREAD_START_ROUTINE )g_pCheat->Action, 0, 0, 0 );
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

