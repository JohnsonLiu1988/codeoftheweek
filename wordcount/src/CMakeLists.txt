# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)
# 设置C++标准为 C++ 11
set(CMAKE_CXX_STANDARD 11)
# add header paths
include_directories(/home/guest/workspace/codeoftheweek/wordcount/include)
# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_LIB_SRCS 变量
aux_source_directory(. DIR_LIB_SRCS)
# 生成链接库
add_library (wordcount ${DIR_LIB_SRCS})
