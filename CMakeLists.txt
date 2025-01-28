cmake_minimum_required(VERSION 3.25.0)

project(pclog VERSION 3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)

add_library(pclog SHARED source/pc/log.cpp)

target_include_directories(pclog PUBLIC include)


if(LINUX)
install(TARGETS pclog DESTINATION /usr/lib)

install(DIRECTORY ${CMAKE_SOURCE_DIR}/include/
    DESTINATION /usr/include/
    FILES_MATCHING PATTERN "*.hpp"
)

set(CPACK_GENERATOR "DEB")
set(CPACK_PACKAGE_NAME libpclog)
set(CPACK_PACKAGE_VERSION ${PROJECT_VERSION})
set(CPACK_PACKAGE_VENDOR "oknauta")
set(CPACK_PACKAGE_HOMEPAGE_URL "https://github.com/prescriptioncodes/pclog")
set(CPACK_PACKAGE_DESCRIPTION "A library to logging for C++ with namespace")
set(CPACK_PACKAGE_CONTACT "oknauta@proton.me")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "oknauta <oknauta@proton.me>")
set(CPACK_DEBIAN_PACKAGE_ARCHITECTURE "amd64")
set(CPACK_PACKAGE_LICENSE "MIT license")

include(CPack)

endif(LINUX)