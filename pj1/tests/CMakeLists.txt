cmake_minimum_required(VERSION 2.8.11)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# Build the Google Test library
# add_subdirectory(vendor)

# Setup testing
enable_testing()

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
#include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(
	tests
	src/my_unittest.cpp
)


target_include_directories (
    tests
    PUBLIC
    #${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/../src/include
    ${CMAKE_CURRENT_SOURCE_DIR}/../src
)

# Link against Google Test library
target_link_libraries(tests 
	${GTEST_BOTH_LIBRARIES}
        pthread)

add_test(NAME my_test COMMAND tests)



