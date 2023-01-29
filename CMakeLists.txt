cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(sdl-game VERSION 1.0)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)

include_directories(${SDL2_INCLUDE_DIRS} ${SDL2_IMAGE_INCLUDE_DIRS})

add_executable(sdl-game 
    src/Application.cpp
    src/Window.cpp
    src/Game.cpp
    src/Texture.cpp
    src/World.cpp
    src/Character.cpp
)

target_link_libraries(sdl-game ${SDL2_LIBRARIES} ${SDL2_IMAGE_LIBRARIES})