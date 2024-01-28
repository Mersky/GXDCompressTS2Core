// Core.h
#pragma once

#define WIN32_LEAN_AND_MEAN
#include <iostream>
#include <windows.h>
#include <sstream>
#include "Define.h"

#define EXTERNC extern "C"
#define NAKED __declspec(naked)
#define EXPORT __declspec(dllexport)
#define ALCDECL EXTERNC NAKED void __cdecl
#define EXDLL EXTERNC EXPORT 