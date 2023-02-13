cmake_minimum_required(VERSION 3.24)
project(OpenGL)

set(CMAKE_CXX_STANDARD 23)


include_directories(${OPENGL_INCLUDE_DIRS})

set(GLFW_BUILD_DOCS OFF CACHE BOOL "GLFW lib only")
set(GLFW_INSTALL OFF CACHE BOOL "GLFW lib only")

add_subdirectory(vendor)

set(OpenGL
        main.cpp
        )

add_executable(OpenGL main.cpp)
target_link_libraries(OpenGL ${OPENGL_LIBRARIES} glfw)