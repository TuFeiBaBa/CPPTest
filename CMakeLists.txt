# CMakeList.txt: CPPTest 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

project ("CPPTest")

# 将源代码添加到此项目的可执行文件。
add_executable (hello_world "helloworld/hello_world.cpp")
add_executable (name_space_test "namespace/name_space_test.cpp")
add_executable (cpp_test "cpp_test.cpp" "cpp_test.h")

# TODO: 如有需要，请添加测试并安装目标。
