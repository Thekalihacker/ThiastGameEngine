#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define THIAST_API _declspec(dllexport)
	#else
		#define THIAST_API _declspec(dllimport)
	#endif
#else
	#error Thiast only supports Windows!
#endif