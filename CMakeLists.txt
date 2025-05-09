cmake_minimum_required(VERSION 3.31)
project(anothersomething)

set(CMAKE_CXX_STANDARD 26)
add_subdirectory(cppheader)
add_executable(main_exec main.cpp)
target_link_libraries(main_exec PRIVATE somethingc++)
target_link_libraries(main_exec PRIVATE randomc++)