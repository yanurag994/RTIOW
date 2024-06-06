cmake_minimum_required(VERSION 3.12)
project(RTIOW)

# Set the C++ standard to C++17
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(deps)

# Add source files
set(SOURCES src/main.cpp)

# Add executable
add_executable(RTIOW ${SOURCES})