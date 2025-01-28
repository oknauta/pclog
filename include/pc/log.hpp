// Author: oknauta
// License: MIT
// File: pclog.hpp
// Date: 2024-12-12

#ifndef PCLOG_HPP
#define PCLOG_HPP

namespace PC::Log
{
    void info(const char *DESCRIPTION, ...);
    void warning(const char *DESCRIPTION, ...);
    void error(const char *DESCRIPTION, ...);
    void debug(const char *DESCRIPTION, ...);
} // namespace Log

#endif // PCLOG_HPP