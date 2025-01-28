// Author: oknauta
// License:
// File: test.cpp
// Date: 2024-12-12

#include "pc/log.hpp"

int main(void)
{
    PC::Log::info("Success");
    PC::Log::info("The number is: %d", 12);
    PC::Log::warning("Missing a number");
    PC::Log::error("Failed to load DLL: %s", "opengl32.dll");
    PC::Log::debug("Debug message");
    return 0;
}