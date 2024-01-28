// Connect.cpp
#include "Hooks.h"

CONNECT oConnect = nullptr;

int WINAPI HookedConnect(SOCKET s, const struct sockaddr* name, int namelen)
{
    sockaddr_in* addr_in = nullptr;

    if (name->sa_family == AF_INET) {
        // sockaddr yapýsýný sockaddr_in'e dönüþtür
        addr_in = (sockaddr_in*)name;

        char ipStr[INET6_ADDRSTRLEN];
        inet_ntop(AF_INET, &(addr_in->sin_addr), ipStr, INET6_ADDRSTRLEN);

        if (ipStr != ConnectIP) {
            inet_pton(AF_INET, ConnectIP, &(addr_in->sin_addr));
        }

    }

    // Call the original function
    return oConnect(s, name, namelen);
}
