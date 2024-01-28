// GXDCompress.cpp
#include "GXDCompress.h"

namespace AheadLib
{
	HMODULE m_hModule = NULL;
	DWORD m_dwReturn[51] = {0};


	// 加载原始模块
	inline BOOL WINAPI Load()
	{
		TCHAR tzPath[MAX_PATH];

		lstrcpy(tzPath, TEXT(ZLibFileName));
		m_hModule = LoadLibrary(tzPath);
		if (m_hModule == NULL)
		{
			MessageBoxA(NULL, "Unload ZLib Library!", GameName, MB_ICONSTOP);
		}

		return (m_hModule != NULL);
	}

	// 释放原始模块
	inline VOID WINAPI Free()
	{
		if (m_hModule)
		{
			FreeLibrary(m_hModule);
		}
	}

	// 获取原始函数地址
	FARPROC WINAPI GetAddress(PCSTR pszProcName)
	{
		FARPROC fpAddress;
		CHAR szProcName[64];

		fpAddress = GetProcAddress(m_hModule, pszProcName);
		if (fpAddress == NULL)
		{
			if (HIWORD(pszProcName) == 0)
			{
				wsprintfA(szProcName, "%d", pszProcName);
				pszProcName = szProcName;
			}

			MessageBoxA(NULL, "No found adress!", GameName, MB_ICONSTOP);
			ExitProcess(-2);
		}

		return fpAddress;
	}
}

using namespace AheadLib;

ALCDECL AheadLib_adler32(void)
{
	GetAddress("adler32");
	__asm JMP EAX;
}

ALCDECL AheadLib_compress(void)
{
	GetAddress("compress");
	__asm JMP EAX;
}

ALCDECL AheadLib_compress2(void)
{
	GetAddress("compress2");
	__asm JMP EAX;
}

ALCDECL AheadLib_compressBound(void)
{
	GetAddress("compressBound");
	__asm JMP EAX;
}

ALCDECL AheadLib_crc32(void)
{
	GetAddress("crc32");
	__asm JMP EAX;
}

ALCDECL AheadLib_deflate(void)
{
	GetAddress("deflate");
	__asm JMP EAX;
}

ALCDECL AheadLib_deflateBound(void)
{
	GetAddress("deflateBound");
	__asm JMP EAX;
}

ALCDECL AheadLib_deflateCopy(void)
{
	GetAddress("deflateCopy");
	__asm JMP EAX;
}

ALCDECL AheadLib_deflateEnd(void)
{
	GetAddress("deflateEnd");
	__asm JMP EAX;
}

ALCDECL AheadLib_deflateInit2_(void)
{
	GetAddress("deflateInit2_");
	__asm JMP EAX;
}

ALCDECL AheadLib_deflateInit_(void)
{
	GetAddress("deflateInit_");
	__asm JMP EAX;
}

ALCDECL AheadLib_deflateParams(void)
{
	GetAddress("deflateParams");
	__asm JMP EAX;
}

ALCDECL AheadLib_deflatePrime(void)
{
	GetAddress("deflatePrime");
	__asm JMP EAX;
}

ALCDECL AheadLib_deflateReset(void)
{
	GetAddress("deflateReset");
	__asm JMP EAX;
}

ALCDECL AheadLib_deflateSetDictionary(void)
{
	GetAddress("deflateSetDictionary");
	__asm JMP EAX;
}

ALCDECL AheadLib_get_crc_table(void)
{
	GetAddress("get_crc_table");
	__asm JMP EAX;
}

ALCDECL AheadLib_gzclearerr(void)
{
	GetAddress("gzclearerr");
	__asm JMP EAX;
}

ALCDECL AheadLib_gzclose(void)
{
	GetAddress("gzclose");
	__asm JMP EAX;
}

ALCDECL AheadLib_gzdopen(void)
{
	GetAddress("gzdopen");
	__asm JMP EAX;
}

ALCDECL AheadLib_gzeof(void)
{
	GetAddress("gzeof");
	__asm JMP EAX;
}

ALCDECL AheadLib_gzerror(void)
{
	GetAddress("gzerror");
	__asm JMP EAX;
}

ALCDECL AheadLib_gzflush(void)
{
	GetAddress("gzflush");
	__asm JMP EAX;
}

ALCDECL AheadLib_gzgetc(void)
{
	GetAddress("gzgetc");
	__asm JMP EAX;
}

ALCDECL AheadLib_gzgets(void)
{
	GetAddress("gzgets");
	__asm JMP EAX;
}

ALCDECL AheadLib_gzopen(void)
{
	GetAddress("gzopen");
	__asm JMP EAX;
}

ALCDECL AheadLib_gzprintf(void)
{
	GetAddress("gzprintf");
	__asm JMP EAX;
}

ALCDECL AheadLib_gzputc(void)
{
	GetAddress("gzputc");
	__asm JMP EAX;
}

ALCDECL AheadLib_gzputs(void)
{
	GetAddress("gzputs");
	__asm JMP EAX;
}

ALCDECL AheadLib_gzread(void)
{
	GetAddress("gzread");
	__asm JMP EAX;
}

ALCDECL AheadLib_gzrewind(void)
{
	GetAddress("gzrewind");
	__asm JMP EAX;
}

ALCDECL AheadLib_gzseek(void)
{
	GetAddress("gzseek");
	__asm JMP EAX;
}

ALCDECL AheadLib_gzsetparams(void)
{
	GetAddress("gzsetparams");
	__asm JMP EAX;
}

ALCDECL AheadLib_gztell(void)
{
	GetAddress("gztell");
	__asm JMP EAX;
}

ALCDECL AheadLib_gzungetc(void)
{
	GetAddress("gzungetc");
	__asm JMP EAX;
}

ALCDECL AheadLib_gzwrite(void)
{
	GetAddress("gzwrite");
	__asm JMP EAX;
}

ALCDECL AheadLib_inflate(void)
{
	GetAddress("inflate");
	__asm JMP EAX;
}

ALCDECL AheadLib_inflateBack(void)
{
	GetAddress("inflateBack");
	__asm JMP EAX;
}

ALCDECL AheadLib_inflateBackEnd(void)
{
	GetAddress("inflateBackEnd");
	__asm JMP EAX;
}

ALCDECL AheadLib_inflateBackInit_(void)
{
	GetAddress("inflateBackInit_");
	__asm JMP EAX;
}

ALCDECL AheadLib_inflateCopy(void)
{
	GetAddress("inflateCopy");
	__asm JMP EAX;
}

ALCDECL AheadLib_inflateEnd(void)
{
	GetAddress("inflateEnd");
	__asm JMP EAX;
}

ALCDECL AheadLib_inflateInit2_(void)
{
	GetAddress("inflateInit2_");
	__asm JMP EAX;
}

ALCDECL AheadLib_inflateInit_(void)
{
	GetAddress("inflateInit_");
	__asm JMP EAX;
}

ALCDECL AheadLib_inflateReset(void)
{
	GetAddress("inflateReset");
	__asm JMP EAX;
}

ALCDECL AheadLib_inflateSetDictionary(void)
{
	GetAddress("inflateSetDictionary");
	__asm JMP EAX;
}

ALCDECL AheadLib_inflateSync(void)
{
	GetAddress("inflateSync");
	__asm JMP EAX;
}

ALCDECL AheadLib_inflateSyncPoint(void)
{
	GetAddress("inflateSyncPoint");
	__asm JMP EAX;
}

ALCDECL AheadLib_uncompress(void)
{
	GetAddress("uncompress");
	__asm JMP EAX;
}

ALCDECL AheadLib_zError(void)
{
	GetAddress("zError");
	__asm JMP EAX;
}

ALCDECL AheadLib_zlibCompileFlags(void)
{
	GetAddress("zlibCompileFlags");
	__asm JMP EAX;
}

ALCDECL AheadLib_zlibVersion(void)
{
	GetAddress("zlibVersion");
	__asm JMP EAX;
}