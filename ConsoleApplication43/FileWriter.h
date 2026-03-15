#pragma once

#ifdef FILEWRITER_EXPORTS
#define FILEWRITER_API __declspec(dllexport)
#else
#define FILEWRITER_API __declspec(dllimport)
#endif

extern "C" FILEWRITER_API void SaveToFile(
    const char* name,
    const char* surname,
    int age
);