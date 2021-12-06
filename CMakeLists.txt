cmake_minimum_required(VERSION 3.16)

project(Triangles)

find_package(SDL2 REQUIRED)
find_package(OpenGL REQUIRED)

add_executable(main src/main.cpp)

target_include_directories(main PUBLIC ${SDL2_INCLUDE_DIRS})
target_include_directories(main PUBLIC ${OPENGL_INCLUDE_DIR})

message(STATUS "<<${OPENGL_INCLUDE_DIRS}>>")

target_link_libraries(main ${SDL2_LIBRARIES})
target_link_libraries(main ${OPENGL_LIBRARIES})
