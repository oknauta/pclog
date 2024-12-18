// Author: oknauta
// License: MIT
// File: pclog.hpp
// Date: 2024-12-12

#ifndef PCLOG_HPP
#define PCLOG_HPP

namespace PCLOG
{
    void info(const char *description, ...);
    void warning(const char *description, ...);
    void error(const char *description, ...);
} // namespace PCLOG

#endif // PCLOG_HPP