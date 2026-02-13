cmake_minimum_required(VERSION 3.10)

# Set the project name and C++ standard
project(helloworldproject LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
# Add src directory to include path so headers are found after move
include_directories(${CMAKE_SOURCE_DIR}/src)

# Use wildcard to collect all .cpp and .c files in src/
file(GLOB SOURCES "src/*.cpp" "src/*.c")

add_executable(helloworld ${SOURCES})

# Place runtime executable in repository-level exe/ directory (works for multi-config)
set_target_properties(helloworld PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/exe
	RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_SOURCE_DIR}/exe
	RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_SOURCE_DIR}/exe
)
