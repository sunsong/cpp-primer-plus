cmake_minimum_required(VERSION 3.6)

project(2.1)
project(2.2)
project(2.3)
project(2.4)
project(2.5)
project(2.6)
project(3.1)
project(3.2)
project(3.3)
project(3.4)
project(3.5)
project(3.6)
project(3.7)
project(3.8)
project(3.9)
project(3.10)
project(3.11)
project(3.12)
project(3.13)
project(3.14)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


add_executable(2.1 2/2.1_myfirst.cpp)
add_executable(2.2 2/2.2_carrots.cpp)
add_executable(2.3 2/2.3_getinfo.cpp)
add_executable(2.4 2/2.4_sqrt.cpp)
add_executable(2.5 2/2.5_ourfunc.cpp)
add_executable(2.6 2/2.6_convert.cpp)
add_executable(3.1 3/3.1_limits.cpp)
add_executable(3.2 3/3.2_exceed.cpp)
add_executable(3.3 3/3.3_hexoct1.cpp)
add_executable(3.4 3/3.4_hexoct2.cpp)
add_executable(3.5 3/3.5_chartype.cpp)
add_executable(3.6 3/3.6_morechar.cpp)
add_executable(3.7 3/3.7_bondini.cpp)
add_executable(3.8 3/3.8_floatnum.cpp)
add_executable(3.9 3/3.9_fltadd.cpp)
add_executable(3.10 3/3.10_arith.cpp)
add_executable(3.11 3/3.11_divide.cpp)
add_executable(3.12 3/3.12_modulus.cpp)
add_executable(3.13 3/3.13_init.cpp)
add_executable(3.14 3/3.14_typecast.cpp)