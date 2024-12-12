// Author: oknauta
// License:
// File: pclog.cpp
// Date: 2024-12-12

#include "pclog/pclog.hpp"

#include <iostream>

namespace PCLOG
{
    const char *color_reset = "\033[0m";
    const char *color_red = "\033[31m";
    const char *color_green = "\033[32m";
    const char *color_yellow = "\033[33m";

    void info(const char *description)
    {
        std::cout << color_green
                  << "[INFO] "
                  << color_reset
                  << description
                  << "\n";
    }

    void warning(const char *description)
    {
        std::cout << color_yellow
                  << "[WARNING] "
                  << color_reset
                  << description
                  << "\n";
    }

    void error(const char *description)
    {
        std::cout << color_red
                  << "[ERROR] "
                  << color_reset
                  << description
                  << "\n";
    }
} // namespace PCLOG