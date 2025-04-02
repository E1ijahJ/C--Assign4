cmake_minimum_required(VERSION 3.6)
project(CPPAssign7 VERSION 1.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
enable_testing()
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
FetchContent_MakeAvailable(googletest)
include(GoogleTest)


add_library(SystemFunctions STATIC src/SystemFunctions.cpp)
target_include_directories(SystemFunctions PUBLIC include)



add_subdirectory(tests)