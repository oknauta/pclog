// Author: oknauta
// License: MIT
// File: pclog.cpp
// Date: 2024-12-12

#include <cstdarg>
#include <cstring>
#include <iostream>

namespace PCLOG
{
    static const char *COLOR_RESET = "\033[0m";
    static const char *COLOR_RED = "\033[31m";
    static const char *COLOR_GREEN = "\033[32m";
    static const char *COLOR_YELLOW = "\033[33m";

    static const char *TYPE_INFO = "[INFO]";
    static const char *TYPE_ERROR = "[ERROR]";
    static const char *TYPE_WARNING = "[WARNING]";

    void logMessage(const char *type, const char *color, const char *format, va_list args)
    {
        char buffer[1024];

        vsnprintf(buffer, sizeof(buffer), format, args);

        std::cout << color
                  << type
                  << " "
                  << COLOR_RESET
                  << buffer
                  << "\n";
    }

    void info(const char *format, ...)
    {
        va_list args;
        va_start(args, format);
        logMessage(TYPE_INFO, COLOR_GREEN, format, args);
        va_end(args);
    }

    void warning(const char *format, ...)
    {
        va_list args;
        va_start(args, format);
        logMessage(TYPE_WARNING, COLOR_YELLOW, format, args);
        va_end(args);
    }

    void error(const char *format, ...)
    {
        va_list args;
        va_start(args, format);
        logMessage(TYPE_ERROR, COLOR_RED, format, args);
        va_end(args);
    }
} // namespace PCLOG