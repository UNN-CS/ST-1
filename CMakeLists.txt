cmake_minimum_required (VERSION 3.16)
project (ST-1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)



enable_testing()

add_subdirectory(src)
add_subdirectory(test)
