cmake_minimum_required(VERSION 3.16)
project(2do_Parcial)

file(GLOB headers "includes/*.h")
file(GLOB sources "code/*.cpp")

set(CMAKE_CXX_STANDARD 11)

add_executable(2do_Parcial ${headers} ${sources})