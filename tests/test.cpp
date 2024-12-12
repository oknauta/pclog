// Author: oknauta
// License: 
// File: test.cpp
// Date: 2024-12-12

#include "pclog/pclog.hpp"

int main(void)
{
    PCLOG::info("Success");
    PCLOG::warning("Missing something");
    PCLOG::error("Failed to load DLL");
    return 0;
}