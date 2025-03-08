# CMakeLists.txt for chapter 1
# 1.0 This command sets the minimum equired version of CMake for a project.
#     It specifies that CMake 3.12 or higher is required to build this project.
cmake_minimum_required(VERSION 3.12)
# 2.0 This command sets the project name to chapter_1 and
#     specifies that the project is written in C.
project(temperature C)
# 3.0 This command sets the C standard to C11. 
#     This is the version of the C language that will be used to compile the project.
set(CMAKE_C_STANDARD 11)
# 4.0 This command adds an executable target called chapter_1 to the project.
add_executable(temperature src/temp.c)
