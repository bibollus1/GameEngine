#pragma once

//macro for ddlexport
#ifdef GE_PLATFORM_WINDOWS
	#ifdef GE_BUILD_DLL
		#define GAMEENGINE_API __declspec(dllexport)
	#else
		#define GAMEENGINE_API __declspec(dllimport)
	#endif
#endif
