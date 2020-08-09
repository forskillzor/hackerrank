cmake_minimum_required(VERSION 3.10)

project(hackerrunk)

set(HEADERS)

set(SOURCES
    4.Diagonal-Difference.cpp
)

add_executable(run ${HEADERS} ${SOURCES})

set_target_properties(run PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRES ON)

