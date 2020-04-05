#pragma once

#ifdef PN_PLATAFORM_WINDOWS
	#ifdef PN_BUILD_DLL
		#define PENURIA_API __declspec(dllexport)
	#else
		#define PENURIA_API __declspec(dllimport)
	#endif // PN_BUILD_DLL
#else
	#error Penuria only support Windows!

#endif