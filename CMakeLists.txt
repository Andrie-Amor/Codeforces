cmake_minimum_required(VERSION 3.27)
project(misc_scripts LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(PROBLEM_FILE main.cpp CACHE STRING "Source file to build")
add_executable(cf ${PROBLEM_FILE})

add_custom_target(run
    COMMAND cf < ${CMAKE_SOURCE_DIR}/input.txt > ${CMAKE_SOURCE_DIR}/output.txt
    DEPENDS cf
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)