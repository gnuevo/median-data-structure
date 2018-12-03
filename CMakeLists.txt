cmake_minimum_required(VERSION 2.6)
project(data_structure)

add_executable(data_structure main.cpp data_structure.cpp)
add_executable(tests tests.cpp data_structure.cpp)

install(TARGETS data_structure RUNTIME DESTINATION bin)
