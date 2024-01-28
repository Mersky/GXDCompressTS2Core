// Main.h
#pragma once

// Include Header Files
#include "Core.h"
#include "GXDCompress.h"
#include "Hooks.h"

// Namespaces
using namespace AheadLib;

// Define variables
HANDLE TheMainThread;

// Define methods/functions
__declspec(dllexport) BOOL APIENTRY Init(HINSTANCE hInstance, DWORD reason, LPVOID reserved);
DWORD WINAPI MainThread(LPVOID);
DWORD Initilize();
DWORD Uninitialize();