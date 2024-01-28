// Hooks.h
#pragma once

#include "Core.h"
#include <WinSock2.h>
#include <WS2tcpip.h>
#include "MinHook.h"
#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "MinHook.lib")

// Connect
typedef int (WINAPI* CONNECT)(SOCKET, const struct sockaddr*, int);
extern CONNECT oConnect;
int WINAPI HookedConnect(SOCKET s, const struct sockaddr* name, int namelen);

// Declare the function to install and uninstall the hook
DWORD InstallHook();
DWORD UninstallHook();
