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
    
    PCLOG::info("`int` number: %d", 10);
    PCLOG::info("`float` number: %.2f", 3.1415);
    
    return 0;
}