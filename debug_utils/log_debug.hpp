#ifndef LOG_DEBUG_H
#define LOG_DEBUG_H

#include <cstdarg>
#include <cstdio>
#include <cstring>

#ifdef ANDROID
 #include <android/log.h>
#endif

#if WINAPI_FAMILY == WINAPI_FAMILY_PHONE_APP
#include <windows.h>
#include <debugapi.h>
#endif

#ifdef _MSC_VER
    #define FUNCTION_NAME __FUNCTION__
#else
    #define FUNCTION_NAME __PRETTY_FUNCTION__
#endif

#define LOG_DEBUG_METHOD LOG_DEBUG("\n");


#define LOG_DEBUG(...) LogDebug(FUNCTION_NAME, __VA_ARGS__)

inline void LogDebug(const char* tag, const char* format, ...)
{
#ifdef ENABLE_LOG_DEBUG
    va_list arguments;
    va_start(arguments,format);

#if defined(ANDROID)
    __android_log_vprint(ANDROID_LOG_DEBUG,tag,format,arguments);
#elif WINAPI_FAMILY == WINAPI_FAMILY_PHONE_APP

	char buffer[100];
	_vsnprintf_s(buffer, 100, 99, format, arguments);
	wchar_t bufferW[100];

	size_t ret;
	mbstowcs_s(&ret, bufferW,100, buffer, 100);

    buffer[99] = '\0';
    OutputDebugString(bufferW);
#else
#define _CRT_SECURE_NO_WARNINGS
    char buffer[100];
    strcpy(buffer,"D/");
    strcat(buffer,tag);
    strcat(buffer,": ");
    strcat(buffer,format);
    vprintf(buffer,arguments);
#endif
    va_end(arguments);
#endif // defined DEBUG
}
#endif // LOG_DEBUG_H

