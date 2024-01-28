// GXDCompress.h
#pragma once

#include "Core.h"

namespace AheadLib
{
    extern HMODULE m_hModule;
    extern DWORD m_dwReturn[51];

    EXTERNC BOOL WINAPI Load();
    EXTERNC VOID WINAPI Free();
    EXTERNC FARPROC WINAPI GetAddress(PCSTR pszProcName);
}

// Pragma Linkers
#pragma comment(linker, "/EXPORT:adler32=_AheadLib_adler32,@1")
#pragma comment(linker, "/EXPORT:compress=_AheadLib_compress,@2")
#pragma comment(linker, "/EXPORT:compress2=_AheadLib_compress2,@3")
#pragma comment(linker, "/EXPORT:compressBound=_AheadLib_compressBound,@4")
#pragma comment(linker, "/EXPORT:crc32=_AheadLib_crc32,@5")
#pragma comment(linker, "/EXPORT:deflate=_AheadLib_deflate,@6")
#pragma comment(linker, "/EXPORT:deflateBound=_AheadLib_deflateBound,@7")
#pragma comment(linker, "/EXPORT:deflateCopy=_AheadLib_deflateCopy,@8")
#pragma comment(linker, "/EXPORT:deflateEnd=_AheadLib_deflateEnd,@9")
#pragma comment(linker, "/EXPORT:deflateInit2_=_AheadLib_deflateInit2_,@10")
#pragma comment(linker, "/EXPORT:deflateInit_=_AheadLib_deflateInit_,@11")
#pragma comment(linker, "/EXPORT:deflateParams=_AheadLib_deflateParams,@12")
#pragma comment(linker, "/EXPORT:deflatePrime=_AheadLib_deflatePrime,@13")
#pragma comment(linker, "/EXPORT:deflateReset=_AheadLib_deflateReset,@14")
#pragma comment(linker, "/EXPORT:deflateSetDictionary=_AheadLib_deflateSetDictionary,@15")
#pragma comment(linker, "/EXPORT:get_crc_table=_AheadLib_get_crc_table,@16")
#pragma comment(linker, "/EXPORT:gzclearerr=_AheadLib_gzclearerr,@17")
#pragma comment(linker, "/EXPORT:gzclose=_AheadLib_gzclose,@18")
#pragma comment(linker, "/EXPORT:gzdopen=_AheadLib_gzdopen,@19")
#pragma comment(linker, "/EXPORT:gzeof=_AheadLib_gzeof,@20")
#pragma comment(linker, "/EXPORT:gzerror=_AheadLib_gzerror,@21")
#pragma comment(linker, "/EXPORT:gzflush=_AheadLib_gzflush,@22")
#pragma comment(linker, "/EXPORT:gzgetc=_AheadLib_gzgetc,@23")
#pragma comment(linker, "/EXPORT:gzgets=_AheadLib_gzgets,@24")
#pragma comment(linker, "/EXPORT:gzopen=_AheadLib_gzopen,@25")
#pragma comment(linker, "/EXPORT:gzprintf=_AheadLib_gzprintf,@26")
#pragma comment(linker, "/EXPORT:gzputc=_AheadLib_gzputc,@27")
#pragma comment(linker, "/EXPORT:gzputs=_AheadLib_gzputs,@28")
#pragma comment(linker, "/EXPORT:gzread=_AheadLib_gzread,@29")
#pragma comment(linker, "/EXPORT:gzrewind=_AheadLib_gzrewind,@30")
#pragma comment(linker, "/EXPORT:gzseek=_AheadLib_gzseek,@31")
#pragma comment(linker, "/EXPORT:gzsetparams=_AheadLib_gzsetparams,@32")
#pragma comment(linker, "/EXPORT:gztell=_AheadLib_gztell,@33")
#pragma comment(linker, "/EXPORT:gzungetc=_AheadLib_gzungetc,@34")
#pragma comment(linker, "/EXPORT:gzwrite=_AheadLib_gzwrite,@35")
#pragma comment(linker, "/EXPORT:inflate=_AheadLib_inflate,@36")
#pragma comment(linker, "/EXPORT:inflateBack=_AheadLib_inflateBack,@37")
#pragma comment(linker, "/EXPORT:inflateBackEnd=_AheadLib_inflateBackEnd,@38")
#pragma comment(linker, "/EXPORT:inflateBackInit_=_AheadLib_inflateBackInit_,@39")
#pragma comment(linker, "/EXPORT:inflateCopy=_AheadLib_inflateCopy,@40")
#pragma comment(linker, "/EXPORT:inflateEnd=_AheadLib_inflateEnd,@41")
#pragma comment(linker, "/EXPORT:inflateInit2_=_AheadLib_inflateInit2_,@42")
#pragma comment(linker, "/EXPORT:inflateInit_=_AheadLib_inflateInit_,@43")
#pragma comment(linker, "/EXPORT:inflateReset=_AheadLib_inflateReset,@44")
#pragma comment(linker, "/EXPORT:inflateSetDictionary=_AheadLib_inflateSetDictionary,@45")
#pragma comment(linker, "/EXPORT:inflateSync=_AheadLib_inflateSync,@46")
#pragma comment(linker, "/EXPORT:inflateSyncPoint=_AheadLib_inflateSyncPoint,@47")
#pragma comment(linker, "/EXPORT:uncompress=_AheadLib_uncompress,@48")
#pragma comment(linker, "/EXPORT:zError=_AheadLib_zError,@49")
#pragma comment(linker, "/EXPORT:zlibCompileFlags=_AheadLib_zlibCompileFlags,@50")
#pragma comment(linker, "/EXPORT:zlibVersion=_AheadLib_zlibVersion,@51")