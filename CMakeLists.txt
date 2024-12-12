cmake_minimum_required(VERSION 3.25.0)

project(pclog LANGUAGES CXX)

add_library(pclog SHARED source/pclog/pclog.cpp)

target_include_directories(pclog PUBLIC include)


if(LINUX)
install(TARGETS pclog DESTINATION /usr/lib)

install(DIRECTORY ${CMAKE_SOURCE_DIR}/include/
    DESTINATION /usr/include/
    FILES_MATCHING PATTERN "*.hpp"
)

set(CPACK_GENERATOR "DEB")
set(CPACK_PACKAGE_NAME "pclog")
set(CPACK_PACKAGE_VERSION "0.1.0")
set(CPACK_PACKAGE_VENDOR "oknauta")
set(CPACK_PACKAGE_HOMEPAGE_URL "https://github.com/prescriptioncodes/pclog")
set(CPACK_PACKAGE_DESCRIPTION "A library to logging for C++ with namespace")
set(CPACK_PACKAGE_CONTACT "oknauta@proton.me")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "oknauta <oknauta@proton.me>")
set(CPACK_DEBIAN_PACKAGE_ARCHITECTURE "amd64")
set(CPACK_PACKAGE_LICENSE "mit")

include(CPack)

endif(LINUX)