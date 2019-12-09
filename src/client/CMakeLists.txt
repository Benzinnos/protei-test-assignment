cmake_minimum_required(VERSION 3.5)

project(client LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(../../3rdparty/gsl/include)
include_directories(../shared)

file(GLOB_RECURSE SRCFILES
    ../shared/*.cpp;
    ../shared/*.c;
    ../shared/*.cxx;
    *.cpp;
    *.c;
    *.cxx
)

add_executable(client ${SRCFILES})
