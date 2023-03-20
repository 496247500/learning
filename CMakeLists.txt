# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
#判断编译器类型,如果是gcc编译器,则在编译选项中加入c++11支持
set (CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall")
# Set the project name
# add headfile
include_directories(include)
add_library(tabtenis ./src/chapter13/tabtenn1.cc)
# project (cpptest)
# # Create a sources variable with a link to all cpp files to compile
set(SOURCES
    ./src/chapter13/usett1.cc
)

# # Add an executable with the above sources
add_executable(cpptest ${SOURCES})

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
# target_include_directories(cpptest
#     PRIVATE
#         ${PROJECT_SOURCE_DIR}include
# )
target_link_libraries (cpptest tabtenis)


add_library(brass ./src/chapter13/brass.cc)

add_executable(usebrass1 ./src/chapter13/usebrass1.cc)
target_link_libraries (usebrass1 brass)