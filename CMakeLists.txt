cmake_minimum_required(VERSION 3.27)
project(misc_scripts LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(ENFORCE_IWYU "Fail the build when headers are missing or extra" ON)
if(ENFORCE_IWYU)
    find_program(IWYU_PATH NAMES include-what-you-use iwyu)
    if(IWYU_PATH)
        set(CMAKE_CXX_INCLUDE_WHAT_YOU_USE
            ${IWYU_PATH};-Xiwyu;--error;-Xiwyu;--mapping_file=${CMAKE_SOURCE_DIR}/iwyu.imp)
    else()
        message(FATAL_ERROR "include-what-you-use not found. Install it or configure with -DENFORCE_IWYU=OFF.")
    endif()
endif()

set(PROBLEM_FILE main.cpp CACHE STRING "Source file to build")
add_executable(cf ${PROBLEM_FILE})

add_custom_target(run
    COMMAND cf < ${CMAKE_SOURCE_DIR}/input.txt | tee ${CMAKE_SOURCE_DIR}/output.txt
    DEPENDS cf
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)
