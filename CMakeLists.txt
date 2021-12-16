cmake_minimum_required(VERSION 3.21)
set(CMAKE_CXX_STANDARD 17)

project(Bewm)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/res
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

add_executable(Bewm src/main.cpp src/ray.cpp src/ray.h src/options.h src/player.cpp src/player.h src/game.cpp src/game.h)
target_link_libraries(Bewm ${SDL2_LIBRARIES})
