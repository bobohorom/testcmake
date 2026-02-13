cmake_minimum_required(VERSION 3.10)

# Set the project name and C++ standard
project(helloworldproject LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
# Use wildcard to collect all .cpp files in the current directory
file(GLOB SOURCES "*.cpp" "*.c")

add_executable(helloworld ${SOURCES})
