#ifndef PATAGONIA_COMMON_H
#define PATAGONIA_COMMON_H

#define PATAGONIA_WINDOWS (_WIN32 || _WIN64)

#ifdef PATAGONIA_WINDOWS

#if defined PATAGONIA_EXPORTS
	#define PATAGONIA_API __declspec(dllexport)
#else
	#define PATAGONIA_API __declspec(dllimport)
#endif

#endif

#endif