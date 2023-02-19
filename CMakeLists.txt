cmake_minimum_required(VERSION 3.24)
project(OpenGLProject)

set(CMAKE_CXX_STANDARD 23)
add_executable(OpenGLProject main.cpp Window.cpp Window.h Input.cpp Input.h)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(vendor/glfw)
target_link_libraries(OpenGLProject glfw)

add_subdirectory(vendor/glad)
target_include_directories(OpenGLProject PRIVATE vendor/glad/gl_4.0_core_debug/include)
target_link_libraries(OpenGLProject glad)

#find_package(OpenGL REQUIRED)
#target_link_libraries(OpenGLProject OpenGL::GL)




