// Main.cpp
#include "Main.h"

BOOL APIENTRY DllMain(HINSTANCE hInstance, DWORD reason, LPVOID reserved)
{
	DisableThreadLibraryCalls((HMODULE)hInstance);
	if (reason == DLL_PROCESS_ATTACH)
	{
		TheMainThread = CreateThread(NULL, NULL, MainThread, NULL, NULL, NULL);
	}
	else if (reason == DLL_PROCESS_DETACH)
	{
		// Exit		
		if (Uninitialize() != 0)
		{
			return FALSE;
		}
	}
	return TRUE;
}

DWORD Initilize()
{

	// Load ZLib Library
	if (Load()) {

		// Setup Hooks
		InstallHook();

	}

	return 0;
}

DWORD Uninitialize()
{
	// Terminate MainThread
	#pragma warning(suppress : 6258)
	TerminateThread(TheMainThread, 0);

	// Put code back to normal if required
	Free();

	// Remove Hooks
	UninstallHook();

	return 0;
}

DWORD WINAPI MainThread(LPVOID)
{

	DWORD Result = Initilize();
	if (Result != 0)
	{
		// Error happened find out what the error was and take action
	}

	// Do this loop forever (whilst this thread is running)
	while (1)
	{
		Sleep(1);	// Sleep so that CPU is not fully consumed
	}

}