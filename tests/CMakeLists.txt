cmake_minimum_required(VERSION 3.5)

project(tests LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_definitions(-DGTEST_LANG_CXX11)

include_directories(../src/shared)
include_directories(../src)
include_directories(../3rdparty/google/googletest/include)
include_directories(../3rdparty/google/googletest)
include_directories(../3rdparty/google/googlemock/include)
include_directories(../3rdparty/google/googlemock)

file(GLOB_RECURSE SRCFILES
    ../src/shared/*.cpp;
    ../src/shared/*.c;
    ../src/shared/*.cxx;
    ../src/client/*.cpp;
    ../src/client/*.c;
    ../src/client/*.cxx;
    ../src/server/*.cpp;
    ../src/server/*.c;
    ../src/server/*.cxx;
    *.cpp;
    *.c;
    *.cxx
)
list(FILTER SRCFILES EXCLUDE REGEX "main.*")

add_executable(tests
    main.cpp
    ../3rdparty/google/googletest/src/gtest-all.cc
    ${SRCFILES})

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
