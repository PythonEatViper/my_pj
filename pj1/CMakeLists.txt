cmake_minimum_required (VERSION 2.8.11)
project (pj1)

# configure needed source files
set(SOURCES
    src/main.cpp
    src/my_class.cpp
    src/include/my_class.h
)

# 根据源文件目录构建可执行程序
add_executable(pj1 ${SOURCES})


# 设置包含目录
target_include_directories(
    pj1   #目标
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}/src/include      #包含目录
)


# tests
#enable_testing()
#add_subdirectory(tests)


