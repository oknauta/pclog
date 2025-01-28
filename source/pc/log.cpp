// Author: oknauta
// License: MIT
// File: log.cpp
// Date: 2024-12-12

#include <cstdarg>
#include <iostream>
#include <cstring>
#include <cstdarg>

namespace PC::Log
{
	namespace
	{
		const char *COLOR_RESET = "\033[0m";
		const char *COLOR_RED = "\033[31m";
		const char *COLOR_GREEN = "\033[32m";
		const char *COLOR_YELLOW = "\033[33m";
		const char *COLOR_GRAY = "\033[1;30m";
		const char *TYPE_INFO = "[INFO]";
		const char *TYPE_ERROR = "[ERROR]";
		const char *TYPE_WARNING = "[WARNING]";
		const char *TYPE_DEBUG = "[DEBUG]";
	}
	
	void message(const char *type, const char *color, const char *format, va_list args)
	{
		char buffer[1024];

		vsnprintf(buffer, sizeof(buffer), format, args);

		std::cout	<< color
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
        message(TYPE_INFO, COLOR_GREEN, format, args);
        va_end(args);
    }

    void warning(const char *format, ...)
    {
        va_list args;
        va_start(args, format);
        message(TYPE_WARNING, COLOR_YELLOW, format, args);
        va_end(args);
    }

    void error(const char *format, ...)
    {
        va_list args;
        va_start(args, format);
        message(TYPE_ERROR, COLOR_RED, format, args);
        va_end(args);
    }
	
	void debug(const char *format, ...)
    {
        va_list args;
        va_start(args, format);
        message(TYPE_DEBUG, COLOR_GRAY, format, args);
        va_end(args);
    }
} // namespace Log