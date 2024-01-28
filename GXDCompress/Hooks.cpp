// Hooks.cpp
#include "Hooks.h"

DWORD InstallHook()
{
    // Initialize MinHook
    if (MH_Initialize() != MH_OK) {
        // Handle initialization error
        return 1;
    }

    // Create a hook for the connect function
    if (MH_CreateHookApi(L"ws2_32.dll", "connect", &HookedConnect, reinterpret_cast<LPVOID*>(&oConnect)) != MH_OK) {
        // Handle hook creation error
        return 1;
    }

    // Enable the hook
    if (MH_EnableHook(MH_ALL_HOOKS) != MH_OK) {
        // Handle hook enable error
        return 1;
    }

    return 0;
}

DWORD UninstallHook()
{
    // Disable the hook
    if (MH_DisableHook(MH_ALL_HOOKS) != MH_OK) {
        // Handle hook disable error
        return 1;
    }

    // Uninitialize MinHook
    if (MH_Uninitialize() != MH_OK) {
        // Handle uninitialization error
        return 2;
    }

    return 0;
}
