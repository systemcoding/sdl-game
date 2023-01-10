cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(sdl-game VERSION 1.0)

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(sdl-game 
    src/Application.cpp
    src/Window.cpp
)

target_link_libraries(sdl-game ${SDL2_LIBRARIES})