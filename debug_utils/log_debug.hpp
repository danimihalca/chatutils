#ifndef LOG_DEBUG_H
#define LOG_DEBUG_H


#include <cstdarg>
#include <cstdio>
#include <cstring>

#ifdef ANDROID
 #include <android/log.h>
#endif

#if defined (WINAPI_FAMILY) && WINAPI_FAMILY == WINAPI_FAMILY_PHONE_APP
#include <windows.h>
#include <debugapi.h>
#endif

#ifdef _MSC_VER
    #define FUNCTION_NAME __FUNCTION__
#else
    #define FUNCTION_NAME __PRETTY_FUNCTION__
#endif

#define DEBUG_BUFFER_SIZE 500

#define LOG_DEBUG_METHOD LOG_DEBUG("\n");


#define LOG_DEBUG(...) LogDebug(FUNCTION_NAME, __VA_ARGS__)

inline void LogDebug(const char* tag, const char* format, ...)
{
#ifdef ENABLE_LOG_DEBUG
    va_list arguments;
    va_start(arguments,format);
    char initialBuffer[1000];
    strcpy(initialBuffer,tag);
    strcpy(initialBuffer+strlen(tag)," ");
    strcpy(initialBuffer+strlen(tag)+1,format);
#if defined(ANDROID)
    __android_log_vprint(ANDROID_LOG_DEBUG,"ChatClientAPI",initialBuffer,arguments);
#elif defined (WINAPI_FAMILY) && WINAPI_FAMILY == WINAPI_FAMILY_PHONE_APP

        char buffer[DEBUG_BUFFER_SIZE];
        _vsnprintf_s(buffer, DEBUG_BUFFER_SIZE, DEBUG_BUFFER_SIZE-1, initialBuffer, arguments);
        wchar_t bufferW[DEBUG_BUFFER_SIZE];

	size_t ret;
        mbstowcs_s(&ret, bufferW,DEBUG_BUFFER_SIZE, buffer, DEBUG_BUFFER_SIZE);

    buffer[99] = '\0';
    OutputDebugString(bufferW);
#else
    char buffer[DEBUG_BUFFER_SIZE];
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

