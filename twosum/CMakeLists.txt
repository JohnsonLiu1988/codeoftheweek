# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)
# 设置C++标准为 C++ 11
set(CMAKE_CXX_STANDARD 11)
# 项目信息
project (wordcount)
# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)
# add sub cmake files
add_subdirectory(src)
# 指定生成目标 
add_executable(main main_test.cpp)
# 添加链接库
target_link_libraries(main wordcount gtest pthread)
