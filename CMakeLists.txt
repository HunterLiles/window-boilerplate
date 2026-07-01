cmake_minimum_required(VERSION 3.10)
project(graphics CXX)

set(CMAKE_CXX_STANDARD 17)

find_package(glfw3 3.4 REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} glfw)
